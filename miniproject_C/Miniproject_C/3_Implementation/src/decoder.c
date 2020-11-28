int decoder(int a,int b,int c,int *A,int*B,int *C)
{
    *A=(a*!b)-(!a*b);
    *B=(b*!c)-(!b*c);
    *C=(!a*c)-(a*!c);

    int dummy=1;
    return dummy;
}


