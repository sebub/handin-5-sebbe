# IMPR Handin 5
## Palindromer 

Et palindrom er en tekststreng, som læses ens både forfra og bagfra. 
Eksempelvis er strengen _"regninger"_ et palindrom. 
Vi kan også sige at et palindrom er en tekststreng som er lig med sin egen strengomvending.

Skriv først en iterativ funktion `int is_palindrome_iter(char *str)`, 
der afgør om str er et palindrom. 
En iterativ funktion er en funktion, som 
programmeres ved brug af en while-løkke eller en for-løkke. 
Funktionen skal returnere 1 hvis str er et palindrom, og 0 hvis str ikke er et palindrom.
Skriv dernæst en tilsvarende rekursiv udgave `int is_palindrome_rec(char *str)`.

Den rekursive funktion skal løse nøjagtig det samme problem som den iterative funktion; 
Altså om parameteren `str` er et palindrom. 
Den skal gøre dette ved at undersøge om en bestemt (lidt mindre) 
delstreng af strengen er et palindrom. 
Hvis det hjælper dig, kan du overveje at indføre en hjælpefunktion til 
`is_palindrome_rec`, for at gøre dette.

Målet med denne opgave er at opnå viden og færdigheder i at arbejde med såvel
rekursive som iterativt programmerede funktioner. 
Målet er endvidere at opnå yderligere viden og færdigheder i simpel programmering med
tekststrenge.

Du kan med fordel tilføje tests af dine funktioner ved at bruge CTest (se lektion 8).