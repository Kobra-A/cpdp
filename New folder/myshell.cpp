#include <algorithm>
#include "myshell.h"
#include "stringTokenizer.h"
#include "exit.h"


using namespace std;


int main(int argc, char ** argv){
    int terminate_flag = 0;
    Tokens command_line_token_obj;
    Exit func1;
    Cd func2;
    Pwd func3;
    Myls func4;
    Set func5;

    while(1){
        std::vector<string> command_line_tokens;
        char command_line[80];
        char command_line2[78];
        char command_line3[73];
        int command_line_tokens_size;
        cout << "$ ";
        cin.getline(command_line,80);
        command_line_tokens = command_line_token_obj.tokenize(command_line);
        command_line_tokens_size=command_line_tokens.size();
        for (int i = 0; i < command_line_tokens_size; i++){
            cout << command_line_tokens[i] << endl;
        }
        /* Checking the commands Exit,Cd,Pwd,Set */
       /* if (std::count(v.begin(), v.end(), "|")){

            // array of 2 size a[0] is for
            // reading and a[1] is for
            // writing over a pipe
            int a[2];

            // using pipe for inter
            // process communication
            pipe(a);

            if(!fork())
            {
                // closing normal stdout
                close(1);

                // making stdout same as a[1]
                dup(a[1]);

                // closing reading part of pipe
                // we don't need of it at this time
                close(a[0]);

                // executing ls
                execlp("ls","ls",NULL);
            }
            else
            {
                // closing normal stdin
                close(0);

                // making stdin same as a[0]
                dup(a[0]);

                // closing writing part in parent,
                // we don't need of it at this time
                close(a[1]);

                // executing wc
                execlp("wc","wc",NULL);
            }
        }
        else if(std::count(v.begin(), v.end(), "<")){

        }
        else {*/
            if (command_line_token[0] == 'exit') {
                func1.exit();
            }
            /*else if (comman_line_token[0] == 'cd') {
                strncpy(command_line2, comman_line_token + 2, 78);
                command_line2[78] = '\0';
                func2.cd(command_line2);
            } else if (command_line_token[0] == 'pwd') {
                func3.pwd();
            } else if (command_line_token[0] == 'set') {
                strncpy(command_line3, comman_line_token + 7, 73);
                command_line3[73] = '\0';
                func5.set(command_line3);

            } else if (comman_line_token[0] == 'myls') {
                execv(func5.str, args);
            }*/
        }
        /*Pipe--------------------------------*/

        
/**** Ternimation
		if (!command_line.compare('exit')){
			terminate_flag = 1;
			break;
		}
****/
    }

/*** Termination
		if (terminate_flag == 1){z
			//exit
		}
***/
