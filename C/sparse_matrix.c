#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    int row_pos;
    int col_pos;
    struct Node *next;
};

struct Node *createNode(int d, int r, int c)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = d;
    n->row_pos = r;
    n->col_pos = c;
    n->next = NULL;
    return n;
}

void createSparse(struct Node **start, int d, int r, int c)
{
    struct Node *n = createNode(d, r, c);
    if (*start == NULL)
        *start = n;
    else
    {
        struct Node *curr_Node = *start;
        while (curr_Node->next != NULL)
            curr_Node = curr_Node->next;
        curr_Node->next = n;
    }
}

void printSparse(struct Node *start)
{
    while (start != NULL)
    {
        printf("%d\t%d\t%d\n", start->row_pos, start->col_pos, start->data);
        start = start->next;
    }
    printf("\n");
}

struct Node *addSparse(struct Node *m1, struct Node *m2)
{
    struct Node *curr_Node1, *curr_Node2, *m3, *curr_Node3;
    curr_Node1 = m1;
    curr_Node2 = m2;
    if (curr_Node1->row_pos < curr_Node2->row_pos)
    {
        curr_Node3 = createNode(curr_Node1->data, curr_Node1->row_pos, curr_Node1->col_pos);
        curr_Node1 = curr_Node1->next;
    }
    else if (curr_Node1->row_pos > curr_Node2->row_pos)
    {
        curr_Node3 = createNode(curr_Node2->data, curr_Node2->row_pos, curr_Node2->col_pos);
        curr_Node2 = curr_Node2->next;
    }
    else
    {
        if (curr_Node1->col_pos < curr_Node2->col_pos)
        {
            curr_Node3 = createNode(curr_Node1->data, curr_Node1->row_pos, curr_Node1->col_pos);
            curr_Node1 = curr_Node1->next;
        }
        else if (curr_Node1->col_pos > curr_Node2->col_pos)
        {
            curr_Node3 = createNode(curr_Node2->data, curr_Node2->row_pos, curr_Node2->col_pos);
            curr_Node2 = curr_Node2->next;
        }
        else
        {
            curr_Node3 = createNode(curr_Node1->data + curr_Node2->data, curr_Node1->row_pos, curr_Node1->col_pos);
            curr_Node1 = curr_Node1->next;
            curr_Node2 = curr_Node2->next;
        }
    }

    m3 = curr_Node3;

    while (curr_Node1 && curr_Node2)
    {
        if (curr_Node1->row_pos < curr_Node2->row_pos)
        {
            curr_Node3->next = createNode(curr_Node1->data, curr_Node1->row_pos, curr_Node1->col_pos);
            curr_Node1 = curr_Node1->next;
            curr_Node3 = curr_Node3->next;
        }
        else if (curr_Node1->row_pos > curr_Node2->row_pos)
        {
            curr_Node3->next = createNode(curr_Node2->data, curr_Node2->row_pos, curr_Node2->col_pos);
            curr_Node2 = curr_Node2->next;
            curr_Node3 = curr_Node3->next;
        }
        else
        {
            if (curr_Node1->col_pos < curr_Node2->col_pos)
            {
                curr_Node3->next = createNode(curr_Node1->data, curr_Node1->row_pos, curr_Node1->col_pos);
                curr_Node1 = curr_Node1->next;
                curr_Node3 = curr_Node3->next;
            }
            else if (curr_Node1->col_pos > curr_Node2->col_pos)
            {
                curr_Node3->next = createNode(curr_Node2->data, curr_Node2->row_pos, curr_Node2->col_pos);
                curr_Node2 = curr_Node2->next;
                curr_Node3 = curr_Node3->next;
            }
            else
            {
                curr_Node3->next = createNode(curr_Node1->data + curr_Node2->data, curr_Node1->row_pos, curr_Node1->col_pos);
                curr_Node1 = curr_Node1->next;
                curr_Node2 = curr_Node2->next;
                curr_Node3 = curr_Node3->next;
            }
        }
    }

    while (curr_Node1)
    {
        curr_Node3->next = createNode(curr_Node1->data, curr_Node1->row_pos, curr_Node1->col_pos);
        curr_Node1 = curr_Node1->next;
        curr_Node3 = curr_Node3->next;
    }

    while (curr_Node2)
    {
        curr_Node3->next = createNode(curr_Node2->data, curr_Node2->row_pos, curr_Node2->col_pos);
        curr_Node2 = curr_Node2->next;
        curr_Node3 = curr_Node3->next;
    }

    return m3;
}

int main()
{
    int SparseData[5]; // First row of sparse matrix for containing number of rows, columns, and elements with values for matrices 1, 2, and the sum matrix respectively
    SparseData[2] = SparseData[3] = SparseData[4] = 0;
    int d;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &SparseData[0], &SparseData[1]);
    struct Node *matrix1 = NULL, *matrix2 = NULL;
    printf("Enter the elements for matrix 1:\n");
    for (int i = 0; i < SparseData[0]; i++)
    {
        for (int j = 0; j < SparseData[1]; j++)
        {
            scanf("%d", &d);
            if (d)
            {
                createSparse(&matrix1, d, i, j);
                SparseData[2]++;
            }
        }
    }
    printf("\nEnter the elements for matrix 2:\n");
    for (int i = 0; i < SparseData[0]; i++)
    {
        for (int j = 0; j < SparseData[1]; j++)
        {
            scanf("%d", &d);
            if (d)
            {
                createSparse(&matrix2, d, i, j);
                SparseData[3]++;
            }
        }
    }
    printf("\nEntered Sparse Matrices are:\n");
    printf("\nSparse Matrix 1:\n");
    printf("Row\tColumn\tValue\n");
    // printf("Row\tColumn\tValue\n%d\t%d\t%d\n", SparseData[0], SparseData[1], SparseData[2]);
    printSparse(matrix1);
    printf("\nSparse Matrix 2:\n");
    printf("Row\tColumn\tValue\n");
    // printf("Row\tColumn\tValue\n%d\t%d\t%d\n", SparseData[0], SparseData[1], SparseData[3]);
    printSparse(matrix2);
    struct Node *matrix3 = addSparse(matrix1, matrix2);
    printf("\nResult of summation of the given Sparse Matrices:\n");
    printf("Row\tColumn\tValue\n");
    printSparse(matrix3);
    return 0;
}
