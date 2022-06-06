#include<stdio.h>
#include<stdlib.h>
typedef struct num{
    int n1,n2,n3;
}num;

int main()
{
    FILE*fp;int i;num num1;
    fp=fopen("D://testing2.bin","rb");
    // for(i=1;i<=5;i++)
    // {
    //     num1.n1=i;
    //     num1.n2=5*i;
    //     num1.n3=6*i-1;
    //     fwrite(&num1,sizeof(num),1,fp);
    // }
     for(i=1;i<=5;i++)
    {
      
        fread(&num1,sizeof(num1),1,fp);
        printf("n1=%d\t n2=%d\t n3=%d \t",num1.n1,num1.n2,num1.n3);
    }
    fclose(fp);

    // fread

    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>

// struct threeNum
// {
//    int n1, n2, n3;
// };

// int main()
// {
//    int n;
//    struct threeNum num;
//    FILE *fptr;

//    if ((fptr = fopen("D://prog1.bin","rb")) == NULL){
//        printf("Error! opening file");

//        // Program exits if the file pointer returns NULL.
//        exit(1);
//    }

//    for(n = 1; n < 5; ++n)
//    {
//       num.n1 = n;
//       num.n2 = 5*n;
//       num.n3 = 5*n + 1;
//       fwrite(&num, sizeof(struct threeNum), 1, fptr); 
//    }
//    for(n = 1; n < 5; ++n)
//    {
//       fread(&num, sizeof(struct threeNum), 1, fptr); 
//       printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//    }
//   for(n = 1; n < 5; ++n)
//    {
//       fread(&num, sizeof(struct threeNum), 1, fptr); 
//       printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//       fseek(fptr, (-2)*sizeof(struct threeNum), SEEK_CUR);
//    }
//    fclose(fptr); 
  
//    return 0;
// }