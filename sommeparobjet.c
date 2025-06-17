float sommeparobjet(struct facture tabf[N]){
	int i;
    float so;
    so=0;
    char o[30];
    printf("veuillez saisir l`objet");
    scanf("%s",&o);
    	for(i=0;i<N;i++){
    		if(strcmp(o,tabf[i].objet)==0){
    			so=so+tabf[i].montant;
			}
		} 
		return so;