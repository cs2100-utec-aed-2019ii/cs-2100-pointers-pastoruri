//1. Se imprime "1 2 3 4 5 6 7 8 9 10"
//2. Se imprime "7 5 10"
//3. Se imprime "T L T"
//4. *p=45 actualiza el valor de i a 45
//5. Si va a dar error, pues p es un puntero a double y en la instruccion estamos pidiendo que p apunte a la direccion de un char.
//6. No usaría esta funcion en el main. En realidad esta funcion no haría nada puesto que no estamos pasando las variables por referencia. Si la funcion
//fuera swap(int* &x, int* &y) lo que haría sería intercambiar las direcciones adonde apuntan los punteros x e y. Pero como no lo hace, el intercambio solo vive dentro de la funcion swap()
//7. Se imprime "2 8"
//8. Se imprime "0 8"
//9. Se imprime "8 15"
//10. Se imprime "8"
//11. int main() {
//    int a=1;
//    int *ptr=&a;
//    cout<<a<<" "<<&a<<" "<<ptr;
//    }
//12. Se imprime "13 13 13"
//13. Se imprime "5 10 7" (el swap no es por referencia)
//14. Se imprime "4 1"
//15. int main() {
//    int a=1,b=2,result;
//    int *p,*p1,*p2;
//    p=&a;
//    p1=&b;
//    p2=&result;
//    *p2=*p1+*p;
//    cout<<*p2;
//
//}
//16. Se imprime "19"
//17. Ese codigo no va a imprimir nada, puesto que el puntero ptr nunca se inicializó y el valor asignado fue destinado a un espacio de memoria 'fantasma'
//18. Se imprime "18"
//19. Agarra un string y desde la ultima posición lo recorre hacia atras mientras hayan espacios, cuando se terminan los espacios, agrega un '\0' al final del string
//20. Es un codigo que recorre un string y reemplaza las comas ',' por espacios.
