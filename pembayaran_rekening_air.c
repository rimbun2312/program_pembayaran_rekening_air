#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int validasi(){
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0 || angka > 2 || karakter != '\n'){
        fflush(stdin);
        printf("\t\tInput invalid! Masukkan menu yang benar : ");
        return validasi();
    } else {
        return angka;
    }
}

int validasi2(){
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0 || angka > 3 ){
        fflush(stdin);
        printf("\t\tInput invalid! Masukkan menu yang benar : ");
        return validasi2();
    } else {
        return angka;
    }
}


int inputan(){
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0){
        fflush(stdin);
        printf("\t\tInput invalid! Masukkan menu yang benar : ");
        return inputan();
    } else {
        return angka;
    }
}


int main(){

	/*	DEKRALASI VARIABEL	*/
	int bangunan;		//MENAMPUNG BANGUNAN
	char gol[5];		//MENAMPUNG GOLONGAN BANGUNAN
	int air_l, air_s, total_air;		//UNTUK PERHITUNGAN AIR
	int daya; 		//UNTUK MENAMPUNG DAYA LISTRIK
	float tarif;		//TARIF PEMAKAIAN AIR
	int pilihan;		//UNTUK PILIHAN SUBSIDI ATAU TIDAK || UNTUK MENGETAHUI JENIS NIAGA

	system("cls");
	printf("\n========== Program Menghitung  ============\n");
	printf("========== Pemakaian Air PDAM  ============\n");
	printf(">>>>>      1. Rumah Tangga           <<<<<<\n");
    printf(">>>>>      2. Usaha                  <<<<<<\n");
    printf("===========================================\n");

	printf("Masukan Jenis Bangunan :  ");
	bangunan = validasi();

	/*	KONDISI BANGUNAN	*/
	if(bangunan == 1){
		printf("\n====================================\n");
		printf(">>>> 1. Non Niaga Bersubsidi    <<<<\n");
		printf(">>>> 2. Non Niaga Tanpa Subsidi <<<<\n");
		printf("====================================\n");

		printf("Masukkan Kondisi Bangunan : ");
		pilihan = validasi();

		if(pilihan == 1){
			printf("\n======================================\n");
			printf("============= Jenis Golongan =========\n");
			printf(">>>>>>>>>>>>>    Gol A1   <<<<<<<<<<<<\n");
			printf(">>>>>>>>>>>>>    Gol A2   <<<<<<<<<<<<\n");
			printf(">>>>>>>>>>>>>    Gol A3   <<<<<<<<<<<<\n");
			printf(">>>>>>>>>>>>>    Gol A4   <<<<<<<<<<<<\n");
			printf("======================================\n");
			printf("Masukan golongan rumah : ");
			scanf("%s", gol);
			printf("Masukan daya listrik : ");
			daya = inputan();

			/*	PROSES PENGGUNAAN AIR	*/
			printf("Masukan pemakain air bulan lalu : ");
			air_l = inputan();
			printf("Masukan pemakain air bulan sekarang : ");
			air_s = inputan();

			total_air = air_s - air_l;

			if(strcmp(gol, "A1")==0){
				if(daya == 0 || daya <= 450){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 1780;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 2060;
					}else if(total_air > 20){
						tarif = total_air * 5880;
					}
				}else if(daya >= 450 || daya <= 900){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 2060;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 2340;
					}else if(total_air > 20){
						tarif = total_air * 5940;
					}
				}
			}else if(strcmp(gol, "A2")==0){
				if(daya == 0 || daya <= 450){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 2340;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 2620;
					}else if(total_air > 20){
						tarif = total_air * 5940;
					}
				}else if(daya >= 450 || daya <= 900){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 2620;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 2900;
					}else if(total_air > 20){
						tarif = total_air * 6060;
					}
				}
			}else if(strcmp(gol, "A3")==0){
				if(daya == 0 || daya <= 450){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 2900;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 3180;
					}else if(total_air > 20){
						tarif = total_air * 6120;
					}
				}else if(daya >= 450 || daya <= 900){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 3180;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 3460;
					}else if(total_air > 20){
						tarif = total_air * 6180;
					}
				}
			}else if(strcmp(gol, "A4")==0){
				if(daya == 0 || daya <= 450){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 3460;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 3740;
					}else if(total_air > 20){
						tarif = total_air * 6240;
					}
				}else if(daya >= 450 || daya <= 900){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 3740;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 4020;
					}else if(total_air > 20){
						tarif = total_air * 6300;
					}
				}
			}
		}else if(pilihan == 2){
			printf("\n======================================\n");
			printf("============= Jenis Golongan =========\n");
			printf(">>>>>>>>>>>>>    Gol A1   <<<<<<<<<<<<\n");
			printf(">>>>>>>>>>>>>    Gol A2   <<<<<<<<<<<<\n");
			printf(">>>>>>>>>>>>>    Gol A3   <<<<<<<<<<<<\n");
			printf(">>>>>>>>>>>>>    Gol A4   <<<<<<<<<<<<\n");
			printf("======================================\n");
			printf("Masukan golongan rumah : ");
			scanf("%s", gol);
			printf("Masukan daya listrik : ");
			daya = inputan();

			/*	PROSES PENGGUNAAN AIR	*/
			printf("Masukan pemakaian air bulan lalu : ");
			air_l = inputan();
			printf("Masukan pemakaian air bulan sekarang : ");
			air_s = inputan();

			total_air = air_s - air_l;

			if(strcmp(gol, "A1")==0){
				if(daya == 0 || daya <= 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6340;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9200;
					}else if(total_air > 20){
						tarif = total_air * 9600;
					}
				}else if(daya > 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6420;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9350;
					}else if(total_air > 20){
						tarif = total_air * 9650;
					}
				}
			}else if(strcmp(gol, "A2")==0){
				if(daya >= 0 || daya <= 1300){
					if(total_air == 0 || total_air <= 10){
						tarif = total_air * 6490;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9500;
					}else if(total_air > 20){
						tarif = total_air * 9800;
					}
				}else if(daya > 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6570;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9650;
					}else if(total_air > 20){
						tarif = total_air * 9950;
					}
				}
			}else if(strcmp(gol, "A3")==0){
				if(daya >= 0 || daya <= 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6640;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9800;
					}else if(total_air > 20){
						tarif = total_air * 10100;
					}
				}else if(daya > 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6720;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9950;
					}else if(total_air > 20){
						tarif = total_air * 10250;
					}
				}
			}else if(strcmp(gol, "A4")==0){
				if(daya >= 0 || daya <= 1300){
					if(total_air == 0 || total_air <= 10){
						tarif = total_air * 6790;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 10100;
					}else if(total_air > 20){
						tarif = total_air * 10400;
					}
				}else if(daya > 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6879;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 10250;
					}else if(total_air > 20){
						tarif = total_air * 10550;
					}
				}
			}
		}
	}else if(bangunan == 2){
		printf("=======================================\n");
		printf("==========   Jenis Usaha   ============\n");
		printf("========== 1. Niaga Kecil  ============\n");
		printf("========== 2. Niaga Sedang ============\n");
		printf("========== 3. Niaga Besar  ============\n");
		printf("=======================================\n");
		printf("\nMasukkan Jenis Usaha : ");
		pilihan = validasi2();

		printf("Masukan daya listrik : ");
		daya = inputan();

		/*	PROSES PENGGUNAAN AIR	*/
		printf("Masukan pemakaian air bulan lalu : ");
		air_l = inputan();
		printf("Masukan pemakaian air bulan sekarang : ");
		air_s = inputan();

		total_air = air_s - air_l;

		if(pilihan == 1){
			if(daya >= 0 || daya <=450){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 9200;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 9850;
				}else if(total_air > 20){
					tarif = total_air * 10950;
				}
			}else if(daya > 450 || daya <=900){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 9500;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 10150;
				}else if(total_air > 20){
					tarif = total_air * 11250;
				}
			}else if(daya > 900 || daya <=1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 9800;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 10450;
				}else if(total_air > 20){
					tarif = total_air * 11550;
				}
			}else if(daya > 1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 10100;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 10750;
				}else if(total_air > 20){
					tarif = total_air * 11850;
				}
			}
		}else if(pilihan == 2){
			if(daya >= 0 || daya <=450){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 10400;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 11050;
				}else if(total_air > 20){
					tarif = total_air * 12150;
				}
			}else if(daya > 450 || daya <=900){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 10700;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 11350;
				}else if(total_air > 20){
					tarif = total_air * 12550;
				}
			}else if(daya > 900 || daya <=1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 11000;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 11650;
				}else if(total_air > 20){
					tarif = total_air * 13150;
				}
			}else if(daya > 1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 11300;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 11950;
				}else if(total_air > 20){
					tarif = total_air * 13950;
				}
			}
		}else if(pilihan == 3){
			if(daya >= 0 || daya <=450){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 11600;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 12250;
				}else if(total_air > 20){
					tarif = total_air * 14750;
				}
			}else if(daya > 450 || daya <=900){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 11900;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 12550;
				}else if(total_air > 20){
					tarif = total_air * 15050;
				}
			}else if(daya > 900 || daya <=1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 12200;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 12850;
				}else if(total_air > 20){
					tarif = total_air * 15850;
				}
			}else if(daya > 1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 12500;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 13150;
				}else if(total_air > 20){
					tarif = total_air * 16650;
				}
			}
		}
	}
	system("cls");
	FILE *file; //TAMBAHAN
    file=fopen("pdam_baru.txt", "w"); //TAMBAHAN
    fprintf(file,"\t\t\t====================================================================\n");
    fprintf(file,"\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    fprintf(file,"\t\t\t====================================================================\n");
    fprintf(file,"\t\t\t====================================================================\n");
    fprintf(file,"\t\t\t| Penggunaan air bulan lalu       | %d M^3\n", air_l);
    fprintf(file,"\t\t\t| Penggunaan air bulan ini        | %d M^3\n", air_s);
    fprintf(file,"\t\t\t| Total penggunaan air bulan ini  | %d M^3\n", total_air);
    fprintf(file,"\t\t\t__________________________________|_________________________________\n\n");
    fprintf(file,"\t\t\t                 | TOTAL PEMBAYARAN | Rp %.2f\n", tarif);
    fprintf(file,"\t\t\t                 ===================================================");
    fclose(file); //TAMBAHAN
    printf("\t\t\t====================================================================\n"); //TAMBAHAN
    printf("\t\t\t|        PEMBAYARAN BERHASIL, BUKTI PEMBAYARAN AKAN DICETAK        |\n"); //TAMBAHAN
    printf("\t\t\t|                   Klik enter untuk melanjutkan                   |\n"); //TAMBAHAN
    printf("\t\t\t====================================================================\n"); //TAMBAHAN
    getchar();
}
