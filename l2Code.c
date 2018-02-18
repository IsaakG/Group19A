void letterGuess(){
	switch(letter){
		case 'A': 
			dot();
			dash();
			break;
		case 'B':
			dash();
			dot();
			dot();
			dot();
			break;
		case 'C':
			dash();
			dot();
			dash();
			dot(); 
			break;
		case 'D': 
			dash();
			dot();
			dot();
			break;
		case 'E':
			dot(); 
			break;
		case 'F':
			dot();
			dot();
			dash();
			dot(); 
			break;
		case 'G': 
			dash();
			dash();
			dot();
			break;
		case 'H':
			dot();
			dot();
			dot();
			dot(); 
			break;
		case 'I':
			dot();
			dot(); 
			break;
		case 'J':
			dot();
			dash();
			dash();
			dash(); 
			break;
}

void dot(){
	int temp = count;
	while(count - temp < dot_time){ //turn buzzer on for one unit
		BUZZER = 0;
	}
	BUZZER = 1;						//then turn it off
	while(count - temp < dot_time); //keep off for one unit
}

void dash(){
	int temp = count;
	while(count - temp < (dot_time * 3)){ //turn buzzer on for
		BUZZER = 0;						  //three units
	}
	BUZZER = 1; 						  //then turn it off
	while(count - temp < dot_time); //keep off for one unit
}
bool codeGuess(){
	switch(letter){ //dot = 1, dash = 2, end = 0
		bool correct = false;
		case 'A':
			if(input[0] == 1 && input[1] == 2 && input[2] == 0){
				correct = true;
			}
			break;
		case 'B':
			if(input[0] == 2 && input[1] == 1 && input[2] == 1 &&
				input[3] == 1 && input[4] == 0){
				correct = true;
			}
			break;
		case 'C':
			if(input[0] == 2 && input[1] == 1 && input[2] == 2 &&
			input[3] == 1 && input[4] == 0){
				correct = true;
			}
			break;
		case 'D':
			if(input[0] == 2 && input[1] == 1 && input[2] == 1 &&
			input[3] == 0){
				correct = true;
			}
			break;
		case 'E':
			if(input[0] == 1 && input[1] == 0){
				correct = true;
			}
			break;
		case 'F':
			if(input[0] == 1 && input[1] == 1 && input[2] == 2 &&
			input[3] == 1 && input[4] == 0){
				correct = true;
			}
			break;
		case 'G':
			if(input[0] == 2 && input[1] == 2 && input[2] == 1 &&
			input[3] == 0)
			{
				correct = true;
			}
			break;
		case 'H':
			if(input[0] == 1 && input[1] == 1 && input[2] == 1 &&
			input[3] == 1 && input[4] == 0){
				correct = true;
			}
			break;
		case 'I':
			if(input[0] == 1 && input[1] == 1 && input[2] == 0){
				correct = true;
			}
			break;
		case 'J':
			if(input[0] == 1 && input[1] == 2 && input[2] == 2 &&
			input[3] == 2 && input[4] == 0){
				correct = true;
			}
			break;
}

