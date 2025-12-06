# PROBLEMA-PITICI

TEXT: 

În pădurea cu alune aveau case mai mulți pitici. Unii dintre ei purtau scufii roșii, alții purtau scufii
albastre. Regele lor era singurul care purta scufie galbenă.
Din nefericire au apărut conflicte între piticii cu scufii roșii și piticii cu scufii albastre. Pentru a-și putea
păstra scufia galbenă, regele trebuie să găsească o soluție pentru a aplana acest conflict. El plănuiește să
construiască o potecă prin pădure care să separeu casele piticilor cu scufii roșii de casele piticilor cu scufii
albastre. Pentru aceasta toți sfetnicii trebuie să propună poziții ale potecii. Se cunosc coordonatele tuturor
căsuțelor piticilor și fiecare sfetnic va propune coordonatele a două puncte care se vor afla pe dreapta care
reprezintă poteca.
O potecă este validă dacă și numai dacă toate casele piticilor cu scufii roșii se vor afla de o parte a
potecii și toate casele piticilor cu scufii albastre se vor afla de cealaltă parte. O potecă nu va fi validă dacă va
trece exact prin casa unui pitic.(indiferent de culoarea scufiei acestuia. Trebuie să stabiliți care din potecile
propuse de sfetnici sunt valide.
Date de intrare
Prima linie a fișierului de intrare PITICI.IN (din care se va citi folosind indirectarea) conține numărul M
al piticilor cu scufii roșii. Următoarele M linii conțin perechi de numere reale, separate printr-un spațiu,
reprezentând coordonatele căsuței unui pitic cu scufie roșie.
PROGRAMAREA CALCULATOARELOR ___________________________________________ Laborator Nr. 10
6
Următoarea linie conține numărul N al piticilor cu scufii albastre. Următoarele N linii conțin perechi de
numere reale, separate printr-un spațiu, reprezentând coordonatele căsuței unui pitic cu scufie albastră.
Următoarea linie va conține numărul K al sfetnicilor, iar pe următoarele K linii se vor afla câte patru
numere reale, separate printr-un spațiu, reprezentând coordonatele celor două puncte care vor determina
dreapta propusă de sfetnic.
Date de ieșire
Pe monitor se va afișa un set de K linii, fiecare linie corespunzând unei poteci propuse de un sfetnic. În
cazul în care poteca este validă linia va conține mesajul DA – Sfetnicul i a dat o soluție valida, iar în cazul în
care poteca nu este validă linia va conține mesajul NU – Sfetnicul i a dat o soluție invalida. În ambele cazuri i
reprezintă numărul de ordine al sfetnicului care a dat soluția respectivă.
Exemplu:
PITICI.IN Ce se afișează pe monitor
2 NU - Sfetnicul 1 a dat o solutie invalida
0 0 DA - Sfetnicul 2 a dat o solutie valida
0 2 NU - Sfetnicul 3 a dat o solutie invalida
2 NU - Sfetnicul 4 a dat o solutie invalida
2 0
2 2
4
0 1 2 1
1 0 1 2
0 0 1 2
1 2 2 0
Indicație de rezolvare:
Problema se reduce la a verifica pentru fiecare dintre poteci (drepte) dacă punctele corespunzătoare
căsuțelor tuturor piticilor cu scufii roșii se află de o parte a dreptei și punctele corespunzătoare căsuțelor
tuturor piticilor cu scufii albastre se află de cealaltă parte a dreptei.
Pentru aceasta trebuie determinată ecuația dreptei corespunzătoare unei poteci. Ecuația unei drepte
este:
𝑎𝑥 + 𝑏𝑦 + 𝑐 = 0 (1)
Fie (𝑥!, 𝑦!) și (𝑥", 𝑦") coordonatele a două puncte care determină o dreaptă. Coeficienții din formula
(1) se determină cu relațiile:
𝑎 = 𝑦! − 𝑦" 𝑏 = 𝑥" − 𝑥! 𝑐 = 𝑥!𝑦" − 𝑥"𝑦! (2)
Pentru a determina de care parte a dreptei (potecii) se află căsuța unui pitic trebuie să înlocuim în
formula (1) variabilele și cu coordonatele căsuței respective. Pentru o căsuță care se află chiar pe potecă
rezultatul va fi nul, iar pentru căsuțele piticilor cu scufii roșii rezultatul trebuie să aibă un semn, iar pentru
căsuțele piticilor cu scufii albastre rezultatul trebuie să aibă semn opus.
Trebuie să determinăm semnul pentru căsuța primului pitic cu scufie roșie. Apoi vom determina
semnele pentru căsuțele tuturor celorlalți pitici cu scufii roșii. Dacă apare un semn diferit putem trage imediat
concluzia că poteca nu este validă. Dacă obținem o valoare nulă dreapta corespunzătoare va trece prin căsuța
unui pitic, deci nici în această situație poteca nu este validă.
x y
