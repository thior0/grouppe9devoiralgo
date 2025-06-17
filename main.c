main(){
	remplirTab(tabf);
	affichetab(tabf);
 float r=sommetabf(tabf);
 printf("la somme des montants du tableau est:%f",r);
   float min=mintab(tabf);
   printf("le minimum des elements du tableau est:%f",min);
      float max=maxtab(tabf);
   printf("le maximum des elements du tableau est:%f",max);
float so=sommeparobjet(tabf);
printf("la somme par objet est:%f",so);
    factureparetudiant(tabf);
}