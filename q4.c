    #include <stdio.h>

    void swap(int* ptr_a,int* ptr_b)
    {
        int* temp = *ptr_a;
        *ptr_a = *ptr_b;
        *ptr_b = temp;

    }
    int main(void)
    {
        int* ptr_a;
        int* ptr_b;

        int a=8;
        int b=4;

        ptr_a = &a;
        ptr_b = &b;

        printf("Before Swap \n");
        printf("a = %d \n",*ptr_a);
        printf("b = %d \n",*ptr_b);

        swap(ptr_a,ptr_b);

        printf("After Swap \n");
        printf("a = %d \n",*ptr_a);
        printf("b = %d \n",*ptr_b);
    }
