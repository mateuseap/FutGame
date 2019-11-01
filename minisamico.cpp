#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <bits/stdc++.h>

using namespace std;

int main(){

    sf::RenderWindow janela(sf::VideoMode(600, 600), "Mini-Samico");
    
    sf::RectangleShape background(sf::Vector2f(600,600));
    background.setFillColor(sf::Color(0,98,51));
    background.setPosition(0,0);

    sf::Vertex lateralEsq[] = {
        sf::Vertex(sf::Vector2f(20, 25)),
        sf::Vertex(sf::Vector2f(20, 575))
    };    

    sf::Vertex lateralDir[] = {
        sf::Vertex(sf::Vector2f(580, 25)),
        sf::Vertex(sf::Vector2f(580, 575))
    };  

    sf::Vertex fundoCim[] = {
        sf::Vertex(sf::Vector2f(19,25)),
        sf::Vertex(sf::Vector2f(580,25))
    };
    
    sf::Vertex fundoBaix[] = {
        sf::Vertex(sf::Vector2f(19,575)),
        sf::Vertex(sf::Vector2f(580,575))
    };

    sf::Vertex meioCamp[] = {
        sf::Vertex(sf::Vector2f(20, 300)),
        sf::Vertex(sf::Vector2f(580, 300))
    };

    sf::CircleShape centro(48);
    centro.setOutlineThickness(1);
    centro.setOutlineColor(sf::Color(255, 255, 255));
    centro.setFillColor(sf::Color::Transparent);
    centro.setOrigin(-252,-252);

    sf::CircleShape bola(7);
    bola.setFillColor(sf::Color::Red);
    bola.setPosition(293,293); 

    sf::Vertex golCimE[] = {
        sf::Vertex(sf::Vector2f(233, 25)),
        sf::Vertex(sf::Vector2f(233, 77))
    };

    sf::Vertex golCimD[] = {
        sf::Vertex(sf::Vector2f(363, 25)),
        sf::Vertex(sf::Vector2f(363, 77))
    };

    sf::Vertex golCimB[] = {
        sf::Vertex(sf::Vector2f(233, 77)),
        sf::Vertex(sf::Vector2f(363, 77))
    };

    sf::Vertex golBaiE[] = {
        sf::Vertex(sf::Vector2f(233, 522)),
        sf::Vertex(sf::Vector2f(233, 575))
    };

    sf::Vertex golBaiD[] = {
        sf::Vertex(sf::Vector2f(363, 522)),
        sf::Vertex(sf::Vector2f(363, 575))
    };

    sf::Vertex golBaiB[] = {
        sf::Vertex(sf::Vector2f(233, 522)),
        sf::Vertex(sf::Vector2f(363, 522))
    };

    sf::Font asman;
    asman.loadFromFile("ASMAN.TTF");

    sf::Text r1T("1", asman);
    r1T.setCharacterSize(30);
    r1T.setFillColor(sf::Color::Black);

    sf::Text r2T("2", asman);
    r2T.setCharacterSize(30);
    r2T.setFillColor(sf::Color::Black);

    sf::Text r3T("3", asman);
    r3T.setCharacterSize(30);
    r3T.setFillColor(sf::Color::Black);

    sf::Text r1M("1", asman);
    r1M.setCharacterSize(30);
    r1M.setFillColor(sf::Color::Black);

    sf::Text r2M("2", asman);
    r2M.setCharacterSize(30);
    r2M.setFillColor(sf::Color::Black);

    sf::Text r3M("3", asman);
    r3M.setCharacterSize(30);
    r3M.setFillColor(sf::Color::Black);

    sf::CircleShape robo1T(14);
    robo1T.setFillColor(sf::Color::Yellow);
    robo1T.setPosition(286, 238);
    robo1T.setOutlineThickness(1);
    robo1T.setOutlineColor(sf::Color(0, 0, 0));
    double x1T = 286, y1T = 238;

    sf::CircleShape robo2T(14);
    robo2T.setFillColor(sf::Color::Yellow);
    robo2T.setPosition(340, 170);
    robo2T.setOutlineThickness(1);
    robo2T.setOutlineColor(sf::Color(0, 0, 0));
    double x2T = 340, y2T = 170;

    sf::CircleShape robo3T(14);
    robo3T.setFillColor(sf::Color::Yellow);
    robo3T.setPosition(234, 170);
    robo3T.setOutlineThickness(1);
    robo3T.setOutlineColor(sf::Color(0, 0, 0));

    sf::CircleShape robo1M(14);
    robo1M.setFillColor(sf::Color::Blue);
    robo1M.setPosition(286, 334);
    robo1M.setOutlineThickness(1);
    robo1M.setOutlineColor(sf::Color(0, 0, 0));
    double x1M = 286, y1M = 334;

    sf::CircleShape robo2M(14);
    robo2M.setFillColor(sf::Color::Blue);
    robo2M.setPosition(340, 402);
    robo2M.setOutlineThickness(1);
    robo2M.setOutlineColor(sf::Color(0, 0, 0));
    double x2M = 340, y2M = 402;

    sf::CircleShape robo3M(14);
    robo3M.setFillColor(sf::Color::Blue);
    robo3M.setPosition(234, 402);
    robo3M.setOutlineThickness(1);
    robo3M.setOutlineColor(sf::Color(0, 0, 0));
    double x3M = 234, y3M = 402;
    double mX3M, mY3M;

    /*sf::Music somDoGame;
    if(!somDoGame.openFromFile("music.wav")){
        return -1;
    }*/

    while(janela.isOpen()){
        sf::Event evento;
        while(janela.pollEvent(evento)){
            if(evento.type == sf::Event::Closed){
                janela.close();
                cout<<"Janela fechada com sucesso!"<<endl;
            }
        }

        /*if(bola.getPosition().x == robo1T.getPosition().y){
            bola.setPosition(robo1T.getPosition().x+13, robo1T.getPosition().y);
        }else if(bola.getPosition().y == robo1T.getPosition().y){
            bola.setPosition(robo1T.getPosition().x, robo1T.getPosition().y+13);
        }*/

        if(robo3T.getPosition().x < 580){
            robo3T.move(sf::Vector2f(0.05, 0));
        }else{
            robo3T.setPosition(234, 170);
            cout<<"O robô 3 do time amarelo voltou para sua posição inicial!"<<endl;
        }
        /*if(robo3M.getPosition().x > 20){
            robo3M.move(sf::Vector2f(-0.05, 0));
        }else{
            robo3M.setPosition(234, 402);
            cout<<"O robô 3 do time azul voltou para sua posição inicial!"<<endl;
        }*/

        if(robo1T.getGlobalBounds().intersects(bola.getGlobalBounds())){
            cout<<"O robô 1 do time amarelo colidiu com a bola!"<<endl;
        }
        if(robo2T.getGlobalBounds().intersects(bola.getGlobalBounds())){
            cout<<"O robô 2 do time amarelo colidiu com a bola!"<<endl;
        }
        if(robo3T.getGlobalBounds().intersects(bola.getGlobalBounds())){
            cout<<"O robô 3 do time amarelo colidiu com a bola!"<<endl;
        }
        if(robo1M.getGlobalBounds().intersects(bola.getGlobalBounds())){
            cout<<"O robô 1 do time azul colidiu com a bola!"<<endl;
        }
        if(robo2M.getGlobalBounds().intersects(bola.getGlobalBounds())){
            cout<<"O robô 2 do time azul colidiu com a bola!"<<endl;
        }
        if(robo3M.getGlobalBounds().intersects(bola.getGlobalBounds())){
            cout<<"O robô 3 do time azul colidiu com a bola!"<<endl;
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            x1T += 0.5;
            robo1T.setPosition(x1T, y1T);
            cout<<"O robô 1 do time amarelo foi movido para a direita"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            x1T -= 0.5;
            robo1T.setPosition(x1T, y1T);
            cout<<"O robô 1 do time amarelo foi movido para a esquerda"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            y1T += 0.5;
            robo1T.setPosition(x1T, y1T);
            cout<<"O robô 1 do time amarelo foi movido para baixo"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            y1T -= 0.5;
            robo1T.setPosition(x1T, y1T);
            cout<<"O robô 1 do time amarelo foi movido para cima"<<endl;
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
            x1M += 0.5;
            robo1M.setPosition(x1M, y1M);
            cout<<"O robô 1 do time azul foi movido para a direita"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
            x1M -= 0.5;
            robo1M.setPosition(x1M, y1M);
            cout<<"O robô 1 do time azul foi movido para a esquerda"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
            y1M += 0.5;
            robo1M.setPosition(x1M, y1M);
            cout<<"O robô 1 do time azul foi movido para baixo"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
            y1M -= 0.5;
            robo1M.setPosition(x1M, y1M);
            cout<<"O robô 1 do time azul foi movido para cima"<<endl;
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::M)){
            x2T += 0.5;
            robo2T.setPosition(x2T, y2T);
            cout<<"O robô 2 do time amarelo foi movido para a direita"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::B)){
            x2T -= 0.5;
            robo2T.setPosition(x2T, y2T);
            cout<<"O robô 2 do time amarelo foi movido para a esquerda"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::N)){
            y2T += 0.5;
            robo2T.setPosition(x2T, y2T);
            cout<<"O robô 2 do time amarelo foi movido para baixo"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::H)){
            y2T -= 0.5;
            robo2T.setPosition(x2T, y2T);
            cout<<"O robô 2 do time amarelo foi movido para cima"<<endl;
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::L)){
            x2M += 0.5;
            robo2M.setPosition(x2M, y2M);
            cout<<"O robô 2 do time azul foi movido para a direita"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::J)){
            x2M -= 0.5;
            robo2M.setPosition(x2M, y2M);
            cout<<"O robô 2 do time azul foi movido para a esquerda"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::K)){
            y2M += 0.5;
            robo2M.setPosition(x2M, y2M);
            cout<<"O robô 2 do time azul foi movido para baixo"<<endl;
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::I)){
            y2M -= 0.5;
            robo2M.setPosition(x2M, y2M);
            cout<<"O robô 2 do time azul foi movido para cima"<<endl;
        }

        mX3M = sf::Joystick::getAxisPosition(0, sf::Joystick::X);
        mY3M = sf::Joystick::getAxisPosition(0, sf::Joystick::Y);

        if((mY3M > 0) && (mX3M == 0)){
            y3M += 0.5;
            robo3M.setPosition(x3M, y3M);
            cout<<"O robô 3 do time azul foi movido para baixo"<<endl;
        }else if((mY3M < 0) && (mX3M == 0)){
            y3M -= 0.5;
            robo3M.setPosition(x3M, y3M);
            cout<<"O robô 3 do time azul foi movido para cima"<<endl;
        }else if((mX3M > 0) && (mY3M == 0)){
            x3M += 0.5;
            robo3M.setPosition(x3M, y3M);
            cout<<"O robô 3 do time azul foi movido para a direita"<<endl;
        }else if((mX3M < 0) && (mY3M == 0)){
            x3M -= 0.5;
            robo3M.setPosition(x3M, y3M);
            cout<<"O robô 3 do time azul foi movido para a esquerda"<<endl;
        }else if((mX3M > 0) && (mY3M > 0)){
            x3M += 0.5;
            y3M += 0.5;
            robo3M.setPosition(x3M, y3M);
            cout<<"O robô 3 do time azul foi movido para a direita e para baixo"<<endl;
        }else if((mX3M < 0) && (mY3M > 0)){
            x3M -= 0.5;
            y3M += 0.5;
            robo3M.setPosition(x3M, y3M);
            cout<<"O robô 3 do time azul foi movido para a esquerda e para baixo"<<endl;
        }else if((mX3M < 0) && (mY3M < 0)){
            x3M -= 0.5;
            y3M -= 0.5;
            robo3M.setPosition(x3M, y3M);
            cout<<"O robô 3 do time azul foi movido para a esquerda e para cima"<<endl;
        }else if((mX3M > 0) && (mY3M < 0)){
            x3M += 0.5;
            y3M -= 0.5;
            robo3M.setPosition(x3M, y3M);
            cout<<"O robô 3 do time azul foi movido para a direita e para cima"<<endl;
        }

        cout<<mX3M<<" "<<mY3M<<endl;

        janela.clear(sf::Color::Black);

        janela.draw(background);
        
        janela.draw(lateralEsq, 2, sf::Lines);
        janela.draw(lateralDir, 2, sf::Lines);
        
        janela.draw(fundoCim, 2, sf::Lines);
        janela.draw(fundoBaix, 2, sf::Lines);
        
        janela.draw(meioCamp, 2, sf::Lines);
        
        janela.draw(centro);
        janela.draw(bola);
        
        janela.draw(golCimE, 2, sf::Lines);
        janela.draw(golCimD, 2, sf::Lines);
        janela.draw(golCimB, 2, sf::Lines);
        janela.draw(golBaiE, 2, sf::Lines);
        janela.draw(golBaiD, 2, sf::Lines);
        janela.draw(golBaiB, 2, sf::Lines);

        janela.draw(robo1T);
        janela.draw(robo2T);
        janela.draw(robo3T);
        janela.draw(robo1M);
        janela.draw(robo2M);
        janela.draw(robo3M);     

        r1T.setPosition(robo1T.getPosition().x+10, robo1T.getPosition().y-5);
        janela.draw(r1T);
        r2T.setPosition(robo2T.getPosition().x+8, robo2T.getPosition().y-5);
        janela.draw(r2T);
        r3T.setPosition(robo3T.getPosition().x+7, robo3T.getPosition().y-5);
        janela.draw(r3T);
        r1M.setPosition(robo1M.getPosition().x+10, robo1M.getPosition().y-5);
        janela.draw(r1M);
        r2M.setPosition(robo2M.getPosition().x+8, robo2M.getPosition().y-5);
        janela.draw(r2M);
        r3M.setPosition(robo3M.getPosition().x+7, robo3M.getPosition().y-5);
        janela.draw(r3M);

        janela.display();
    }

    return 0;
}