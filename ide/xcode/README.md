#snake  

game deck 11*11  
DrawNode::drawSegment  
  
snake  
LinkList<Sprite>      
First snake head  
snake body  
Last  snake tail  
  
Food Sprite  
  
Game Loop  
prepare:  
    deck status:  
        one food random position  
        snake length 5  
        snake position 6,6 direction up  
playing:  
    while(!gameover){  
      game logic:  
        change all sprite position according to current direction  
        calculate Collision   
          head collision happens -> game over stop game loop  
      render  
    }  
    user interaction :  
      user touch screen  
      touch event position relative to snake head sprite position  
      UP DOWN RIGHT LEFT  
game over:  
    release resource   
    return to menu  
    
    
