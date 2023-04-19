import time
import board
import neopixel
 
# NeoPixels must be connected to D10, D12, D18 or D21 to work.
pixel_pin = board.D21
 
# The number of NeoPixels
num_pixels = 155
 
# The order of the pixel colors - RGB or GRB. Some NeoPixels have red and green reversed!
# For RGBW NeoPixels, simply change the ORDER to RGBW or GRBW.
ORDER = neopixel.GRB
 
pixels = neopixel.NeoPixel(
    pixel_pin, num_pixels, brightness=1, auto_write=False, pixel_order=ORDER
)
sektor1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22]
sektor2 = [23,24, 25]
sektor3 = [26,27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45]
sektor4 = [46,47, 48, 49, 50, 51, 52, 53]
sektor5 = [54,55,147, 148]
sektor6 = [56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67]
sektor7 = [68,69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79]
sektor8 = [80,81,82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106]
sektor9 = [107, 108, 109,110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123]
sektor10 = [124, 125, 126,127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148]

 
def wheel(pos):
    if pos < 0 or pos > 255:
        r = g = b = 0
    elif pos < 85:
        r = int(pos * 3)
        g = int(255 - pos * 3)
        b = 0
    elif pos < 170:
        pos -= 85
        r = int(255 - pos * 3)
        g = 0
        b = int(pos * 3)
    else:
        pos -= 170
        r = 0
        g = int(pos * 3)
        b = int(255 - pos * 3)
    return (r, g, b) if ORDER in (neopixel.RGB, neopixel.GRB) else (r, g, b, 0)
 
def sektor():
    for i in range(num_pixels):
        if i in sektor1:
            pixels[i] = (0,255,0)
            pixels.show()
            #time.sleep(0.2) 
        if i in sektor2:
            pixels[i] = (255,0,127)
            pixels.show()
            #time.sleep(0.2)
        if i in sektor3:
            pixels[i] = (0,0,255)
            pixels.show()
            #time.sleep(0.2)        
        if i in sektor4:
            pixels[i] = (178,102,255)
            pixels.show()
            #time.sleep(0.2) 
        if i in sektor5:
            pixels[i] = (255,255,0)
            pixels.show()
            #time.sleep(0.2)
        if i in sektor6:
            pixels[i] = (255,0,255)
            pixels.show()
            #time.sleep(0.2)        
        if i in sektor7:
            pixels[i] = (0,255,0)
            pixels.show()
            #time.sleep(0.2) 
        if i in sektor8:
            pixels[i] = (255,0,127)
            pixels.show()
            #time.sleep(0.2)
        if i in sektor9:
            pixels[i] = (0,0,255)
            pixels.show()
            #time.sleep(0.2)        
        if i in sektor10:
            pixels[i] = (178,102,255)
            pixels.show()
            #time.sleep(0.2)           
          

def dot():
    for i in range(num_pixels):
        pixels[i] = (255,0,0)
        pixels.show()
        #time.sleep(0.1)

def rainbow_cycle(wait):
    for i in range(num_pixels):
        pixel_index = (i * 256 // num_pixels) 
        pixels[i] = wheel(pixel_index & 255)
    pixels.show()
    time.sleep(wait)        


while True:
    pixels.fill((0, 0, 255))
    print('fill blue')
    pixels.show()
    time.sleep(1)

    print("Dot!")
    dot()

    print('sektor!')
    sektor()
    time.sleep(5)


    print('rainbow time!')
    rainbow_cycle(5) 
