#include <stdio.h>
#include <pthread.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

char *namapokemon[30] = {
}

int mode;
int cari;
pthread_t threadcari;
int input;
pthread_t inputthread;
int shmidpokemon;
int shmidlp;
int shmidpb;
int shmidb;
int* shmpokemon;
int* shmlp;
int* shmpb;
int* shmb;

pthread_mutex_t pokeslotwrite;
int pokeslot;

pthread_mutex_t pokemoncapturewrite;
int pokemoncapture;

pthread_t pokemoncapturethread;
pthread_mutex_t pokemonwrite;

int pokemon[7];
int pokemonAP[7];
pthread_t pokemonthread[7];
int pokedollar;
int lullaby;
int pokeball;
int berry;
int effect;
pthread_t lullabythread;

void printmainmenu() {
printf("\n");
if (mode == 0) {
if (mencari) printf("[ Normal Mode ]\n1. Berhenti Mencari\n2. Pokedex\n3. Shop\n4. Go to capture mode\nInput: "); 
else printf("[ Normal Mode ]\n1. Cari Pokemon\n2. Pokedex\n3. Shop\n4. Go to
capture mode\nInput: ");
} else if (mode == 1) {
if (pokemoncapture == -1) printf("[ Capture Mode ]\n1. Tangkap\n2. Item\n3. Keluar\nInput: ");
else printf("[ Capture Mode ]\nMenemukan pokemon: %s\n1. Tangkap\n2. Item\n3. Keluar\nInput: ", namapokemon[pokemoncapture]);
}
}

//SAMPAI MAIN MENU AJA DEH MAS. DAH MENTOK
