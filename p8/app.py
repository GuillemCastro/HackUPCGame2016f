from PIL import Image

if __name__ == "__main__":
    img = Image.open('not_an_image.png')
    data = img.tobytes()
    A = data[3::4]
    width = img.size[0]
    height = img.size[1]
    for y in range(0, height):
        for x in range(0, width):
            print(chr(A[x+y*width]), end="")