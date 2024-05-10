    for(int r;r>=1;r--)
    {
        rfact*=r;
    }
    int k = n-r;

    for(int k;k>=1;k--)
    {
        nrfact*=k;
    }

    float comb= nfact/(rfact*nrfact);

    printf("\nTHE COMBINATION OF THE ENTRED VALUES IS:- %.2f \n",comb);
