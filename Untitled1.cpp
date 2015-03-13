#include<simplecpp>

void layout()
{
    initCanvas("IITB Monopoly",1300,700);

    Rectangle start(650,200,500,70);
    Text start1(650,200,"Game On!");

    start1.setColor(COLOR("blue"));
    start1.setFill(true);

    Rectangle instr(650,500,500,70);
    Text instr1(650,500,"How to Play??");

    instr1.setColor(COLOR("red"));
    instr1.setFill(true);

    int clickpos=getClick();
    int a=clickpos/65536;
    int b=clickpos%65536;

    if(a<900 && a>400 && b<235 && b>165)
    {
        start.hide();
        start1.hide();
        instr.hide();
        instr1.hide();

        Rectangle player1(650,25,500,50);
        player1.setColor(COLOR("red"));
        player1.setFill(true);
        Text t_player1(650,25,"Player 1");
        t_player1.setColor(COLOR("red"));
        t_player1.setFill(true);


        Rectangle player2(25,350,50,500);
        player2.setColor(COLOR("blue"));
        player2.setFill(true);
        Text t_player2_p(25,280,"P");
        Text t_player2_l(25,300,"l");
        Text t_player2_a(25,320,"a");
        Text t_player2_y(25,340,"y");
        Text t_player2_e(25,360,"e");
        Text t_player2_r(25,380,"r");
        /*Text t_player2_g(25,400," ");*/
        Text t_player2_2(25,420,"2");
        t_player2_p.setColor(COLOR("blue"));
        t_player2_p.setFill(true);
        t_player2_l.setColor(COLOR("blue"));
        t_player2_l.setFill(true);
        t_player2_a.setColor(COLOR("blue"));
        t_player2_a.setFill(true);
        t_player2_y.setColor(COLOR("blue"));
        t_player2_y.setFill(true);
        t_player2_e.setColor(COLOR("blue"));
        t_player2_e.setFill(true);
        t_player2_r.setColor(COLOR("blue"));
        t_player2_r.setFill(true);
        t_player2_2.setColor(COLOR("blue"));
        t_player2_2.setFill(true);


        Rectangle player3(1275,350,50,500);
        player3.setColor(COLOR("green"));
        player3.setFill(true);
        Text t_player3_p(1275,280,"P");
        Text t_player3_l(1275,300,"l");
        Text t_player3_a(1275,320,"a");
        Text t_player3_y(1275,340,"y");
        Text t_player3_e(1275,360,"e");
        Text t_player3_r(1275,380,"r");
        /*Text t_player3_g(1275,400," ");*/
        Text t_player3_3(1275,420,"3");
        t_player3_p.setColor(COLOR("green"));
        t_player3_p.setFill(true);
        t_player3_l.setColor(COLOR("green"));
        t_player3_l.setFill(true);
        t_player3_a.setColor(COLOR("green"));
        t_player3_a.setFill(true);
        t_player3_y.setColor(COLOR("green"));
        t_player3_y.setFill(true);
        t_player3_e.setColor(COLOR("green"));
        t_player3_e.setFill(true);
        t_player3_r.setColor(COLOR("green"));
        t_player3_r.setFill(true);
        t_player3_3.setColor(COLOR("green"));
        t_player3_3.setFill(true);


        Rectangle player4(650,675,500,50);
        player4.setColor(COLOR("yellow"));
        player4.setFill(true);
        Text t_player4(650,675,"Player 4");
        t_player4.setColor(COLOR("yellow"));
        t_player4.setFill(true);


        Rectangle board_ext(650,350,1148,552);
        Rectangle board_int(650,350,820,368);

        Rectangle cell_1((650-492+(0*164)),(350+230-(0*92)),164,92);
        Rectangle cell_2((650-492+(0*164)),(350+230-(1*92)),164,92);
        Rectangle cell_3((650-492+(0*164)),(350+230-(2*92)),164,92);
        Rectangle cell_4((650-492+(0*164)),(350+230-(3*92)),164,92);
        Rectangle cell_5((650-492+(0*164)),(350+230-(4*92)),164,92);
        Rectangle cell_6((650-492+(0*164)),(350+230-(5*92)),164,92);
        Rectangle cell_7((650-492+(1*164)),(350+230-(5*92)),164,92);
        Rectangle cell_8((650-492+(2*164)),(350+230-(5*92)),164,92);
        Rectangle cell_9((650-492+(3*164)),(350+230-(5*92)),164,92);
        Rectangle cell_10((650-492+(4*164)),(350+230-(5*92)),164,92);
        Rectangle cell_11((650-492+(5*164)),(350+230-(5*92)),164,92);
        Rectangle cell_12((650-492+(6*164)),(350+230-(5*92)),164,92);
        Rectangle cell_13((650-492+(6*164)),(350+230-(4*92)),164,92);
        Rectangle cell_14((650-492+(6*164)),(350+230-(3*92)),164,92);
        Rectangle cell_15((650-492+(6*164)),(350+230-(2*92)),164,92);
        Rectangle cell_16((650-492+(6*164)),(350+230-(1*92)),164,92);
        Rectangle cell_17((650-492+(6*164)),(350+230-(0*92)),164,92);
        Rectangle cell_18((650-492+(5*164)),(350+230-(0*92)),164,92);
        Rectangle cell_19((650-492+(4*164)),(350+230-(0*92)),164,92);
        Rectangle cell_20((650-492+(3*164)),(350+230-(0*92)),164,92);
        Rectangle cell_21((650-492+(2*164)),(350+230-(0*92)),164,92);
        Rectangle cell_22((650-492+(1*164)),(350+230-(0*92)),164,92);

        Text t_cell_17((650-492+(6*164)),(350+230-(0*92)),"Start");
        Text t_cell_20((650-492+(3*164)),(350+230-(0*92)),"Chance");
        Text t_cell_1((650-492+(0*164)),(350+230-(0*92)),"Give a Treat");
        Text t_cell_6((650-492+(0*164)),(350+230-(5*92)),"DC++");
        Text t_cell_9((650-492+(3*164)),(350+230-(5*92)),"Chance");
        Text t_cell_12((650-492+(6*164)),(350+230-(5*92)),"Enjoy a Treat");

        Rectangle button_invest(650,295,200,40);
        Text t_invest(650,295,"INVEST");

        Rectangle button_buy(500,360,100,40);
        Text t_buy(500,360,"BUY");

        Rectangle button_roll(800,360,100,40);
        Text t_roll(800,360,"ROLL");

        Rectangle button_instr(650,425,200,40);
        Text t_instructions(650,425,"INFORMATION");

        Rectangle button_turn(1215,660,100,40);
        Text t_turn(1215,660,"END TURN");

        Rectangle dice(650,220,75,75);

        /* button1.hide();
        button2.hide();
        button3.hide();
        player1.hide();
        player2.hide();
        player3.hide();
        player4.hide();
        t_buy.hide();
        t_roll.hide();
        t_instructions.hide();
        board.hide();
        wait(0.1);

        Rectangle r1(600,600,300,300);

        wait(2);

        r1.hide();

        wait(1);


        button1.show();
        player1.show();
        button2.show();
        button3.show();
        player1.show();
        player2.show();
        player3.show();
        player4.show();
        t_buy.show();
        t_roll.show();
        t_instructions.show();
        board.show();*/


        wait(INFINITY);

    }

    else if(a>400 && a<900 && b>465 && b<535)
    {
        start.hide();
        start1.hide();
        instr.hide();
        instr1.hide();

        /*Instructions*/

        Rectangle go_back(150,600,100,40);
        Text t_go_back(150,600,"START GAME");
        wait(INFINITY);
    }

}

int main()
{

    layout();

}
