#include <iostream>
void howManyStep(int n, char from_pole, char to_pole, char aux_pole ){

    if(n == 1){
        cout<<" Pindahkan Disk 1 dari pole(Tiang) " << from_pole << " ke pole " << to_pole <<endl;
        return;
    }
    howManyStep(n - 1, from_pole, aux_pole, to_pole);
    cout<< " Pindahakan Disk " << n << " dari Tiang " << to_pole <<endl;

    howManyStep(n -1, aux_pole, to_pole, from_pole);
} 

selesaikan(){
    howManyStep(n, 'A', 'C' ,'B' );
}