
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct test
// {
//     int a;
//     struct test *ptr;

// }  test;

// int main()
// {
//     test *test1 = NULL;
//     test *node1;
//     node1 = malloc(sizeof(test));
//     if(node1 == NULL)
//         return 1;
//     node1 -> a = 10;
//     node1 -> ptr = NULL;
//     test1 = node1;


//     test *node2 = malloc(sizeof(test));
//     node2 -> a = 11;
//     node2 -> ptr = NULL;
//     node1 -> ptr = node2;
//     test *node3 = malloc(sizeof(test));
//     node3 -> a = 12;
//     node3 -> ptr = NULL;
//     node2 -> ptr = node3;


//     test *node4 = malloc(sizeof(test));
//     node4 -> a = 13;
//     node4 -> ptr = NULL;
//     node3 -> ptr = node4;
//     node4->ptr = NULL;

//     test *tmp = test1;
//     while(tmp != NULL)
//     {
//         printf("%i  ", tmp -> a);
//         tmp = tmp -> ptr;
//     }
//     printf("\n");

//     test *tmp2 = test1;
//     while(tmp2 != NULL)
//     {
//         test1 = test1->ptr;
//         free(tmp2);
//         tmp2 = test1;
//     }
//     // test *tmp2 = test1;
//     // tmp = tmp2->ptr;
//     // tmp2 = test1-> ptr->ptr;
//     // test1 -> ptr = tmp2;
    
//     // free(tmp);
// }