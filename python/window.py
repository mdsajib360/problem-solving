# pygame window creation 
import pygame

pygame.init()

screen = pygame.display.set_mode((700, 500))
pygame.display.set_caption("My Pygame Game") 
white = (255, 255, 255)
red = (255, 0, 0)


# game loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    
    screen.fill(white)
    pygame.draw.rect(screen, red, [300, 200, 50, 50])
    pygame.display.update()
