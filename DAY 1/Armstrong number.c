main()
{
    int n,i,s=0,d=0;
    printf("enter number:");
    scanf("%d",&n);
   for(i=n;i>0;i=i/10)
    d++;
      printf("\n No of digit = %d",d);
    for(i=n;i>0;i=i/10)
        s=(s+pow((i%10),d));
    if(s==n)
        printf("\n %d is Armstrong number",n);
    else
        printf("\n %d is Not Armstrong number",n);
}
