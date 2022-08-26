#include <stdio.h>

int starting_screen(){
	printf("LET'S GET READY TO BE GAMING\n");
	return 0;

}

int load_prompt(){
	return 0;
}


int main(int argc, char* argv[]){ 
	if (starting_screen() == 0){
		load_prompt();
	}
}
