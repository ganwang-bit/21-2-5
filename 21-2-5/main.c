//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int pan(int n)
//{
//    int emp,i;
//    if(n==1)
//        return 0;
//    for(i=2;i<=n/2;i++)
//    {
//        if(n%i==0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int count=0,sum=0,n,m,i;
//    scanf("%d%d",&n,&m);
//    for(i=n;i<=m;i++)
//    {
//        if(pan(i))
//        {
//            count++;
//            sum+=i;
//        }
//    }
//    printf("%d %d",count,sum);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int pan(int n)
//{
//    int i;
//    if(n==1)
//        return 0;
//    for(i=2;i<=sqrt(n);i++)
//    {
//        if(n%i==0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int n,count=0,c=0,i;
//    scanf("%d",&n);
//    if(!n)
//    {
//        printf("0");
//        return 0;
//    }
//    int arr[n];
//    for(i=1;i<=n;i++)
//    {
//        if(pan(i))
//        {
//            arr[c]=i;
//            c++;
//        }
//    }
//    for(i=0;i<c-1;i++)
//    {
//        if(arr[i+1]-arr[i]==2)
//            count++;
//    }
//    printf("%d",count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,x,i;
//    scanf("%d%d",&n,&x);
//    int arr[2*n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    for(;i<2*n;i++)
//    {
//        arr[i]=arr[i-n];
//    }
//    for(i=n-x%n;i<2*n-x%n;i++)
//    {
//        if(i!=n-x%n)
//            printf(" ");
//        printf("%d",arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int flag=0;
//int read()
//{
//    char arr[81];
//    if(scanf("%s",arr)!=-1&&read())
//    {
//        printf(" ");
//    }
//    else
//    {
//        if(!flag)
//        {
//            flag=1;
//            return 0;
//        }
//    }
//    return printf("%s",arr);
//}
//int main()
//{
//    read();
//    return 0;
//}
