#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

	int n;
	int i, j;
	int mapSize = 0;
	int found;

	scanf("%d",&n);

	float *numbs = (float *)malloc(n*sizeof(float));
	float *map   = (float *)malloc(n*sizeof(float));
	int *counter =   (int *)malloc(n*sizeof(int));
	
	for(i = 0; i<n; ++i){
		scanf("%f", &numbs[i]);
	}
	
	//cria o mapa
	for(i = 0; i<n; i++){
		found = 0;
		for(j = 0; j < mapSize; ++j){
			if(map[j] == numbs[i]){
				found = 1;
				break;
			}
		}

		if(found){
			counter[j] += 1;
		} else {
			map[mapSize] = numbs[i];
			counter[mapSize] = 1;
			mapSize += 1;
		}
	}

	//ordena
	for(i = 0; i < mapSize - 1; i++){
		for(j = i + 1; j < mapSize; ++j){
			if(map[i] > map[j]){
				float m_aux = map[i];
				map[i] = map[j];
				map[j] = m_aux;

				int c_aux = counter[i];
				counter[i] = counter[j];
				counter[j] = c_aux;
			}
		}
	}

	//imprime o mapa
	for(i = 0; i < mapSize; ++i){
		printf("%.1f %d\n", map[i], counter[i]);
	}

	//libera memória alocada previamente
	free(numbs);
	free(map);
	free(counter);

	return 0;
}
