ici les lettre a,b,c,d et e designe la taille des livres;


Tri[a,b,c,d,e];

 Algorithme du Tri par Remplacement
1. Initialisation: Avoir un tableau T non trié de 5 éléments et un tableau Ttrié de 5 éléments
initialement vide.
2. Boucle Principale : Pour chaque position i dans Ttrié de 1 à 5 :
Trouver le minimum de T et son indice.
Copier ce minimum dans Ttriéli).
Remplacer ce minimum dans T par le maximum du tableau T (ceci est une astuce
pour éviter de re-sélectionner cet élément).
