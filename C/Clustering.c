// Author : Suvojit Ghosh
// Roll No. : 21051520

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct Point {
    int x;
    int y;
}Point;

typedef struct Dist {
    int xx;
    int yy;
    float d;
}Dist;

int main() {

    int n,m;
    printf("Enter number of clusters : ");
    scanf("%d",&n);
    printf("Enter number of points in each cluster : ");
    scanf("%d",&m);

    Point clusters[n][m];
    srand(time(0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            clusters[i][j].x = rand() % 100 + 1;
            clusters[i][j].y = rand() % 100 + 1;
        }
    }

    Point new_point;
    new_point.x = rand() % 100 + 1;
    new_point.y = rand() % 100 + 1;

    Dist distance[n][m];
    float min_dist = sqrt(pow(clusters[0][0].x-new_point.x,2) + pow(clusters[0][0].y - new_point.y,2));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            distance[i][j].xx = clusters[i][j].x - new_point.x;
            distance[i][j].yy = clusters[i][j].y - new_point.y;
            distance[i][j].d = sqrt(pow(distance[i][j].yy,2) + pow(distance[i][j].xx,2));
            min_dist = distance[i][j].d < min_dist ? distance[i][j].d : min_dist ;
        }
    }

    printf("All the points in each cluster: \n");
    for(int i =0; i<n;i++){
        printf("Cluster %d : ",i+1);
        for(int j=0;j<m;j++){
            printf("(%d , %d)  ",clusters[i][j].x,clusters[i][j].y);
        }
        printf("\n");
    }

    printf("New Point: (%d, %d)\n", new_point.x,new_point.y);
    printf("Distance of the new point from all the points: \n");
    for(int i=0;i<n;i++) {
        printf("Distance of new point from points in cluster %d: ", i+1);
        for(int j=0;j<m;j++)
            printf("%f ",distance[i][j].d);
        printf("\n");
    }

    printf("Minimum distancce: %f",min_dist);

    return 0;
}