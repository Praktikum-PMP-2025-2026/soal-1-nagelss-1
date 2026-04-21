/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2
 *   Hari dan Tanggal    : Selasa, 21 April 2026
 *   Nama (NIM)          : Hufnagel Ruben Lenard Situmorang (13224015)
 *   Nama File           : soal1.c
 *   Deskripsi           : Menghapus seminimalpun karakter kurung dari string
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char script[100];
    char new[100];

    gets(script);

    int delete;
    int x = 0;
    int j;

    for (int i=0;i<strlen(script);i++){
        delete = 0;
        if (script[i]=='('){
            int first = 1;
            delete = 1;
            j = i+1;
            if (j==strlen(script)){
                delete = 1;
            }
            else{
                for (int j=i+1;j<strlen(script);j++){
                    if (script[j]=='('){
                        delete += 1;
                        first+=1;
                    }
                    else if (script[j]==')'){
                        delete -= 1;
                        if (first==1){
                            break;
                        }
                    }
                }
            }
        }
        else if (script[i]==')'){
            int first = 1;
            j = i-1;
            if (j==-1){
                delete = 1;
            }
            else{
                delete = 1;
                for (int j=i-1;j>-1;j--){
                    if (script[j]==')'){
                        delete += 1;
                        first +=1;
                    }
                    else if (script[j]=='('){
                        delete -= 1;
                        if (first==1){
                            break;
                        }
                    }
                }
            }
        }

        if (delete==0){
            new[x] = script[i];
            x += 1;
        }
    }
    printf("%s",new);
    return 0;
}

