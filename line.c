#include<stdio.h>
#include<string.h>

void unipolarNRZ(char *data) {
	int i;
	for (i = 0; i < strlen(data); i++) {
		if (data[i] == '1') {
		printf("hi ");
			} else if (data[i] == '0') {
		printf("lo ");
	}
	}
		printf("\n");
}

void polarNRZ(char *data){
	int i;
	for(i = 0; i < strlen(data); i++){
		if(data[i] == '1'){
			printf("neg ");
		} else if (data[i] == '0') {
			printf("pos ");
		}
	}
	printf("\n");
}

void polarNRZ_I_High(char *data) {
	int i;
    const char *neg = "neg ";
    const char *pos = "pos ";

    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1') {
            printf("inv ");
        } else if (data[i] == '0') {
            printf("no inv ");
        }
    }
    printf("\n");

    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1') {
            const char *temp = pos;
            pos = neg;
            neg = temp;
            printf(" %s", pos);
        } else if (data[i] == '0') {
            printf("  %s", pos);
        }
    }
    printf("\n\n");
}

void polarNRZ_I_Low(char *data) {
	int i;
    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1') {
            printf("inv ");
        } else if (data[i] == '0') {
            printf("no inv ");
        }
    }

    printf("\n");

    const char *neg = "neg";
    const char *pos = "pos";

    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1') {
        const char *temp = pos;
            pos = neg;
            neg = temp;
            printf("%s  ", neg);
        } else if (data[i] == '0') {
            printf("%s ", neg);
        }
    }

    printf("\n");
}

void polarRZ(char *data) {
    int i;
    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1') {
            printf("pos ");
        } else if (data[i] == '0') {
            printf("neg ");
        }
    }

    printf("\n");

    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1' || data[i] == '0') {
            printf("RZ ");
        }
    }

    printf("\n");
}

void BiphaseManchester(char *data){
	int i;
	for(i =0; i < strlen(data); i++){
		if(data[i] == '1'){
			printf("nTp ");
		} else if (data[i] == '0') {
			printf("pTn ");
		}
	} printf("\n");
}

void BiphaseDifferential_High(char *data) {
    int i;
const char *neg = "nTp";  
const char *pos = "pTn";  
const char *temp;

    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1') {
            temp = pos;
            pos = neg;
            neg = temp;
            printf("%s ", neg);
        } else if (data[i] == '0') {
            printf("%s ", neg);
        }
    }

    printf("\n");

    for (i = 0; i < strlen(data); i++) {
        if (data[i + 1] == '0') {
            printf("inv ");
        } else {
            printf("no inv ");
        }
    }

    printf("\n");
}

void BiphaseDifferential_Low(char *data) {
    int i;
const char *neg = "nTp";  
const char *pos = "pTn";  
const char *temp;

    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1') {
            temp = pos;
            pos = neg;
            neg = temp;
            printf("%s ", pos);
        } else if (data[i] == '0') {
            printf("%s ", pos);
        }
    }

    printf("\n");

    for (i = 0; i < strlen(data); i++) {
        if (data[i + 1] == '0') {
            printf("inv ");
        } else {
            printf("no inv ");
        }
    }

    printf("\n");
}

void bipolarAMI(char *data) {
	int i;
	char state = 'p';
    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1') {
            printf("pos ");
            state = (state == 'p') ? 'n' : 'p'; 
        } else if (data[i] == '0') {
            printf("zero ");
        }
    }

    printf("\n");
}

void bipolarPseudo(char *data) {
    char neg = 'n'; 
    char pos = 'p'; 
    char temp;
	int i;
    for (i = 0; i < strlen(data); i++) {
        if (data[i] == '1') {
            printf("zero ");
        } else if (data[i] == '0') {
            temp = pos;
            pos = neg;
            neg = temp;
            printf("%s ", neg);
        }
    }

    printf("\n");
}


























	
