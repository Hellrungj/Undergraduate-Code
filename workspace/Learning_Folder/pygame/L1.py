import pygame

# Lession 1 - 10

# Color Values Sets
white = (255,255,255)
black = (0,0,0)
red = (255,0,0)
green = (0,255,0)
blue = (0,0,255)

# Sets up the screen
gameDisplay = pygame.display.set_mode((800,600))
pygame.display.set_caption("John's First Video Game")

# Sets up the Game Exit Value
gameExit = False

# Starting value for movments
lead_x = 300
lead_y = 300
lead_x_change = 0

# Sets up the FPS 
clock = pygame.time.Clock()

# Game Event Zone
while not gameExit:
    for event in pygame.get(): 
        if event.type == pygame.QUIT:
            gameExit = True
        if event.type == pygame.KEYDOWN: 
            if event.key == pygame.K_LEFT:
                lead_x_change = -10
            if event.key == pygame.K_RIGHT:
                lead_x_change = 10
                
        if event.type == pygame.KEYUP:
            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:
                lead_x_change = 0
                
    lead_x += lead_x_change # updates the movment            
    gameDisplay.fill(white) # Color the whole screen white
    pygame.draw.rect(gameDisplay,black, [lead_x,lead_y, 10, 10]) # Object on the screen
    pygame.display.update() # reners
    
    clock.tick(15) # FPS
    
# Make sure the game quits    
pygame.quit() 
quit()
        