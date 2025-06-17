void factureparetudiant(struct facture tabf[N]){
	int i;
	char id[30];
    int t=0;
	printf("saisir id"); 
	scanf("%s",&id);
		for(i=0;i<N;i++){
			if(strcmp(id,tabf[i].idetudiant)==0){
				printf("la facture de l`etudiant est:%d,%f,%s",tabf[i].numero,tabf[i].montant,tabf[i].objet);
				t=1;
			}
			if(t==0){
				printf("cet etudiant n`a de facture");
			}
		}

		}