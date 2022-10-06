//Kamalika Dutta, 2104025
#include <stdio.h>


struct emp {
  char firstname[64];
  char desig[50], gen[2], dept[50];
  double basic;
};
  
// function declaration
void displayDetail(struct emp s1);

void displayDetail(struct emp s1) {
  printf("Firstname: %s\n", s1.firstname);
  printf("\nDesignation: %s",s1.desig);
        printf("\nGender: %s",s1.gen);
        printf("\nDepartment: %s",s1.dept);
        printf("\nBasic pay: %lf", s1.basic);
        double gross=s1.basic+(0.25*s1.basic)+(0.75*s1.basic);
        printf("\nGross pay: %lf", gross);
        printf("\n");

}
int main(void) {
  struct emp S[1000];

  int i,n;
  printf("Enter n: ");
 
  
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    printf("Enter detail of emp #%d\n", (i+1));

    printf("Enter First Name: ");
    scanf("%s", S[i].firstname);
    printf("Employee %d-\n",i+1);
    printf("\nName:");
    scanf("%s",S[i].firstname);
    printf("\nDesignation:");
    scanf("%s",S[i].desig);
    printf("\nGender(M/F/Others):");
    scanf("%s",S[i].gen);
    printf("\nDepartment:");
    scanf("%s",S[i].dept);
    printf("Basic pay:");
    scanf("%lf",&S[i].basic);
    char ch= getchar();

  
    
  }
  

  for (i = 0; i < n; i++) {
    printf("\nemp #%d Detail:\n", (i+1));
    displayDetail(S[i]);
  }
  
  return 0;
}