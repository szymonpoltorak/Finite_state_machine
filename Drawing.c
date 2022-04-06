#include <stdio.h>
#include "Drawing.h"

void schematics_default(void){
	printf(GREEN"                  -------- \n");
	printf("             //   --------   \\\\"WHITE"	                                             --------\n");
	printf(GREEN"           //  //          \\\\  \\\\"WHITE"          -----------1--------->        //            \\\\ \n");
	printf(GREEN"          ||   ||    q0    ||   ||"WHITE"		 		        ||      q1      ||\n");
	printf(GREEN"          ||   \\\\          //   ||"WHITE"         <---------1-----------        \\\\            //\n");
	printf(GREEN"           \\\\     --------     //"WHITE"                                            --------\n");
	printf(GREEN"	      \\\\  --------  //"WHITE"                                                     \n");
	printf("\n");
	printf("                |          ^                                                |          ^\n");
	printf("                |          |                                                |          |\n");
	printf("                0          0                                                0          0\n");
	printf("                |          |                                                |          |\n");
	printf("                V          |                                                V          |\n");
	printf("\n");
	printf("	          --------                                                    "BLUE"--------\n");
	printf(WHITE"              //            \\\\            -----------1--------->          "BLUE"//            \\\\\n");
	printf(WHITE"             ||      q2      ||                                          "BLUE"||      q3      ||   "WHITE"<------------- START\n");
	printf(WHITE"              \\\\            //            <---------1-----------          "BLUE"\\\\            //\n");
	printf(WHITE"                  --------                                                    "BLUE"-------- \n"WHITE);
}

void schematics_state_q0(void){
	system("cls");
	printf(RED"                  -------- \n");
	printf("             //   --------   \\\\"WHITE"	                                             --------\n");
	printf(RED"           //  //          \\\\  \\\\"WHITE"          -----------1--------->        //            \\\\ \n");
	printf(RED"          ||   ||    q0    ||   ||"WHITE"		 		        ||      q1      ||\n");
	printf(RED"          ||   \\\\          //   ||"WHITE"         <---------1-----------        \\\\            //\n");
	printf(RED"           \\\\     --------     //"WHITE"                                            --------\n");
	printf(RED"	      \\\\  --------  //"WHITE"                                                     \n");
	printf("\n");
	printf("                |          ^                                                |          ^\n");
	printf("                |          |                                                |          |\n");
	printf("                0          0                                                0          0\n");
	printf("                |          |                                                |          |\n");
	printf("                V          |                                                V          |\n");
	printf("\n");
	printf("	          --------                                                    "BLUE"--------\n");
	printf(WHITE"              //            \\\\            -----------1--------->          "BLUE"//            \\\\\n");
	printf(WHITE"             ||      q2      ||                                          "BLUE"||      q3      ||   "WHITE"<------------- START\n");
	printf(WHITE"              \\\\            //            <---------1-----------          "BLUE"\\\\            //\n");
	printf(WHITE"                  --------                                                    "BLUE"-------- \n"WHITE);
	system("pause");
}

void schematics_state_q1(void){
	system("cls");
	printf(GREEN"                  -------- \n");
	printf("             //   --------   \\\\"WHITE"	                                             "RED"--------\n"WHITE);
	printf(GREEN"           //  //          \\\\  \\\\"WHITE"          -----------1--------->        "RED"//            \\\\ \n"WHITE);
	printf(GREEN"          ||   ||    q0    ||   ||"WHITE"		 		        "RED"||      q1      ||\n");
	printf(GREEN"          ||   \\\\          //   ||"WHITE"         <---------1-----------        "RED"\\\\            //\n"WHITE);
	printf(GREEN"           \\\\     --------     //"WHITE"                                            "RED"--------\n"WHITE);
	printf(GREEN"	      \\\\  --------  //"WHITE"                                                     \n");
	printf("\n");
	printf("                |          ^                                                |          ^\n");
	printf("                |          |                                                |          |\n");
	printf("                0          0                                                0          0\n");
	printf("                |          |                                                |          |\n");
	printf("                V          |                                                V          |\n");
	printf("\n");
	printf("	          --------                                                    "BLUE"--------\n");
	printf(WHITE"              //            \\\\            -----------1--------->          "BLUE"//            \\\\\n");
	printf(WHITE"             ||      q2      ||                                          "BLUE"||      q3      ||   "WHITE"<------------- START\n");
	printf(WHITE"              \\\\            //            <---------1-----------          "BLUE"\\\\            //\n");
	printf(WHITE"                  --------                                                    "BLUE"-------- \n"WHITE);
	system("pause");
}

void schematics_state_q2(void){
	system("cls");
	printf(GREEN"                  -------- \n");
	printf("             //   --------   \\\\"WHITE"	                                             --------\n");
	printf(GREEN"           //  //          \\\\  \\\\"WHITE"          -----------1--------->        //            \\\\ \n");
	printf(GREEN"          ||   ||    q0    ||   ||"WHITE"		 		        ||      q1      ||\n");
	printf(GREEN"          ||   \\\\          //   ||"WHITE"         <---------1-----------        \\\\            //\n");
	printf(GREEN"           \\\\     --------     //"WHITE"                                            --------\n");
	printf(GREEN"	      \\\\  --------  //"WHITE"                                                     \n");
	printf("\n");
	printf("                |          ^                                                |          ^\n");
	printf("                |          |                                                |          |\n");
	printf("                0          0                                                0          0\n");
	printf("                |          |                                                |          |\n");
	printf("                V          |                                                V          |\n");
	printf("\n");
	printf(RED"	          --------                                                    "BLUE"--------\n");
	printf(RED"              //            \\\\"WHITE"            -----------1--------->          "BLUE"//            \\\\\n");
	printf(RED"             ||      q2      ||"WHITE"                                          "BLUE"||      q3      ||   "WHITE"<------------- START\n");
	printf(RED"              \\\\            //"WHITE"            <---------1-----------          "BLUE"\\\\            //\n");
	printf(RED"                  --------"WHITE"                                                    "BLUE"-------- \n"WHITE);
	system("pause");
}

void schematics_state_q3(void){
	system("cls");
	printf(GREEN"                  -------- \n");
	printf("             //   --------   \\\\"WHITE"	                                             --------\n");
	printf(GREEN"           //  //          \\\\  \\\\"WHITE"          -----------1--------->        //            \\\\ \n");
	printf(GREEN"          ||   ||    q0    ||   ||"WHITE"		 		        ||      q1      ||\n");
	printf(GREEN"          ||   \\\\          //   ||"WHITE"         <---------1-----------        \\\\            //\n");
	printf(GREEN"           \\\\     --------     //"WHITE"                                            --------\n");
	printf(GREEN"	      \\\\  --------  //"WHITE"                                                     \n");
	printf("\n");
	printf("                |          ^                                                |          ^\n");
	printf("                |          |                                                |          |\n");
	printf("                0          0                                                0          0\n");
	printf("                |          |                                                |          |\n");
	printf("                V          |                                                V          |\n");
	printf("\n");
	printf("	          --------                                                    "RED"--------\n");
	printf(WHITE"              //            \\\\            -----------1--------->          "RED"//            \\\\\n");
	printf(WHITE"             ||      q2      ||                                          "RED"||      q3      ||   "WHITE"<------------- START\n");
	printf(WHITE"              \\\\            //            <---------1-----------          "RED"\\\\            //\n");
	printf(WHITE"                  --------                                                    "RED"-------- \n"WHITE);
	printf("--------------------------\n");
	system("pause");
}

void print_schematics(int* state, int n){
	schematics_state_q3();

	for (int i = 1; i <= n; i++){
		if (state[i] == Q3)
			schematics_state_q3();
		else if (state[i] == Q1)
			schematics_state_q1();
		else if (state[i] == Q2)
			schematics_state_q2();
		else if (state[i] == Q0)
			schematics_state_q0();
	}
}

void end_state_q0(void){
	printf(YELLOW"                  -------- \n");
	printf("             //   --------   \\\\"WHITE"	                                             --------\n");
	printf(YELLOW"           //  //          \\\\  \\\\"WHITE"          -----------1--------->        //            \\\\ \n");
	printf(YELLOW"          ||   ||    q0    ||   ||"WHITE"		 		        ||      q1      ||\n");
	printf(YELLOW"          ||   \\\\          //   ||"WHITE"         <---------1-----------        \\\\            //\n");
	printf(YELLOW"           \\\\     --------     //"WHITE"                                            --------\n");
	printf(YELLOW"	      \\\\  --------  //"WHITE"                                                     \n");
	printf("\n");
	printf("                |          ^                                                |          ^\n");
	printf("                |          |                                                |          |\n");
	printf("                0          0                                                0          0\n");
	printf("                |          |                                                |          |\n");
	printf("                V          |                                                V          |\n");
	printf("\n");
	printf("	          --------                                                    "BLUE"--------\n");
	printf(WHITE"              //            \\\\            -----------1--------->          "BLUE"//            \\\\\n");
	printf(WHITE"             ||      q2      ||                                          "BLUE"||      q3      ||   "WHITE"<------------- START\n");
	printf(WHITE"              \\\\            //            <---------1-----------          "BLUE"\\\\            //\n");
	printf(WHITE"                  --------                                                    "BLUE"-------- \n"WHITE);
	system("pause");
}

void end_state_q1(void){
	printf(GREEN"                  -------- \n");
	printf("             //   --------   \\\\"WHITE"	                                             "YELLOW"--------\n");
	printf(GREEN"           //  //          \\\\  \\\\"WHITE"          -----------1--------->        "YELLOW"//            \\\\ \n");
	printf(GREEN"          ||   ||    q0    ||   ||"WHITE"		 		        "YELLOW"||      q1      ||\n");
	printf(GREEN"          ||   \\\\          //   ||"WHITE"         <---------1-----------        "YELLOW"\\\\            //\n");
	printf(GREEN"           \\\\     --------     //"WHITE"                                            "YELLOW"--------\n");
	printf(GREEN"	      \\\\  --------  //"WHITE"                                                     \n");
	printf("\n");
	printf("                |          ^                                                |          ^\n");
	printf("                |          |                                                |          |\n");
	printf("                0          0                                                0          0\n");
	printf("                |          |                                                |          |\n");
	printf("                V          |                                                V          |\n");
	printf("\n");
	printf("	          --------                                                    "BLUE"--------\n");
	printf(WHITE"              //            \\\\            -----------1--------->          "BLUE"//            \\\\\n");
	printf(WHITE"             ||      q2      ||                                          "BLUE"||      q3      ||   "WHITE"<------------- START\n");
	printf(WHITE"              \\\\            //            <---------1-----------          "BLUE"\\\\            //\n");
	printf(WHITE"                  --------                                                    "BLUE"-------- \n"WHITE);
	system("pause");
}

void end_state_q2(void){
	printf(GREEN"                  -------- \n");
	printf("             //   --------   \\\\"WHITE"	                                             --------\n");
	printf(GREEN"           //  //          \\\\  \\\\"WHITE"          -----------1--------->        //            \\\\ \n");
	printf(GREEN"          ||   ||    q0    ||   ||"WHITE"		 		        ||      q1      ||\n");
	printf(GREEN"          ||   \\\\          //   ||"WHITE"         <---------1-----------        \\\\            //\n");
	printf(GREEN"           \\\\     --------     //"WHITE"                                            --------\n");
	printf(GREEN"	      \\\\  --------  //"WHITE"                                                     \n");
	printf("\n");
	printf("                |          ^                                                |          ^\n");
	printf("                |          |                                                |          |\n");
	printf("                0          0                                                0          0\n");
	printf("                |          |                                                |          |\n");
	printf("                V          |                                                V          |\n");
	printf("\n");
	printf(YELLOW"	          --------"WHITE"                                                    "BLUE"--------\n");
	printf(YELLOW"              //            \\\\"WHITE"            -----------1--------->          "BLUE"//            \\\\\n");
	printf(YELLOW"             ||      q2      ||"WHITE"                                          "BLUE"||      q3      ||   "WHITE"<------------- START\n");
	printf(YELLOW"              \\\\            // "WHITE"           <---------1-----------          "BLUE"\\\\            //\n");
	printf(YELLOW"                  -------- "WHITE"                                                   "BLUE"-------- \n"WHITE);
	system("pause");
}

void end_state_q3(void){
	printf(GREEN"                  -------- \n");
	printf("             //   --------   \\\\"WHITE"	                                             --------\n");
	printf(GREEN"           //  //          \\\\  \\\\"WHITE"          -----------1--------->        //            \\\\ \n");
	printf(GREEN"          ||   ||    q0    ||   ||"WHITE"		 		        ||      q1      ||\n");
	printf(GREEN"          ||   \\\\          //   ||"WHITE"         <---------1-----------        \\\\            //\n");
	printf(GREEN"           \\\\     --------     //"WHITE"                                            --------\n");
	printf(GREEN"	      \\\\  --------  //"WHITE"                                                     \n");
	printf("\n");
	printf("                |          ^                                                |          ^\n");
	printf("                |          |                                                |          |\n");
	printf("                0          0                                                0          0\n");
	printf("                |          |                                                |          |\n");
	printf("                V          |                                                V          |\n");
	printf("\n");
	printf("	          --------                                                    "YELLOW"--------\n");
	printf(WHITE"              //            \\\\            -----------1--------->          "YELLOW"//            \\\\\n");
	printf(WHITE"             ||      q2      ||                                          "YELLOW"||      q3      ||   "WHITE"<------------- START\n");
	printf(WHITE"              \\\\            //            <---------1-----------          "YELLOW"\\\\            //\n");
	printf(WHITE"                  --------                                                    "YELLOW"-------- \n"WHITE);
	system("pause");
}

void print_end(int* state, int n){
	if (state[n] == Q0){
		system("cls");
		printf("Stan koncowy to : q0\n");
		end_state_q0();
	}
	if (state[n] == Q1){
		system("cls");
		printf("Stan koncowy to : q1\n");
		end_state_q1();
	}
	if (state[n] == Q2){
		system("cls");
		printf("Stan koncowy to : q2\n");
		end_state_q2();
	}
	if (state[n] == Q3){
		system("cls");
		printf("Stan koncowy to : q3\n");
		end_state_q3();
	}
}