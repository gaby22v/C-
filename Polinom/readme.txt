Variabilele coef si pow reprezinta coeficienti respectiv puterea polinomului
Functia polinom() este constructorul implicit
Functia set() seteaza valoarea polinomului.Functia are 2 paramateri:coeficientul si puterea lui x.Este o implementare nerecomandata
deoarece polinomul se initializeaza in functia main in urmatorul fel:
exemplu:pentru polinomul a: 4x^3+2x^2+x^1+x^0 avem:
 a.set(4,3);
 a.set(2,2);
 a.set(1,1);
 a.set(1,0);
 Functia power() intoarce puterea polinomului
 Functia print() afiseaza rezultatul inmultirii respectiv sumei
 Functia evaluate() foloseste schema lui Horner pentru a calcula valoarea polinomului cu o valoare data pentru x;
 Functia plus() aduna 2 polinoame;
 Functia mul() inmulteste 2 polinoame
