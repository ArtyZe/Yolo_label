# Yolo_label

## WHAT IS THIS?!
 Reinventing The Wheel!!!!
 
 ![1_hfyjxxcfingbcyzcgksaiq](https://user-images.githubusercontent.com/35001605/47629997-b47aa200-db81-11e8-8873-71ae653563e0.png)

 In the world, there are many good image labeling tools for object detection. -e.g. , ([Yolo_mark](https://github.com/AlexeyAB/Yolo_mark), [BBox-Label-Tool](https://github.com/puzzledqs/BBox-Label-Tool), [labelImg](https://github.com/tzutalin/labelImg)). 
 
But... I reinvented it...
 
## WHY DID YOU REINVENT THE WHEEL? ARE YOU STUPID?

 When I use the pre-existing program to annotate a training set for YOLO V3, I am sooooooooooo bored...
 
 So I thought about why it is so fxxking bored??

 And I found that anwer.
 
 The answer is that pre-existing programs are not **sensitive**.
 
 So I decided to make a **sensitive** image labeling tool for object detection.
 
 ## SHOW ME YOUR SENSITIVE IMAGE LABELING TOOL!!

 It's the **SENSITIVE** image labeling tool for object detection!
 
![image](https://user-images.githubusercontent.com/35001605/47644151-bd369c80-dbb0-11e8-9505-d7ada78911c2.png)

![ezgif-5-85c0613befb3](https://user-images.githubusercontent.com/35001605/47693025-3d094900-dc3b-11e8-9d96-ea2f7e37cf7a.gif)

![ezgif-5-c57fe634145b](https://user-images.githubusercontent.com/35001605/47693028-3f6ba300-dc3b-11e8-9e22-70c448d59398.gif)

 ## HMM... I SAW THIS DESIGN SOMEWHERE
  I referred to [the website of Joseph Redmon](https://pjreddie.com/darknet/
) who invented the [YOLO](https://www.youtube.com/watch?v=MPU2HistivI).

  ![redmon2](https://user-images.githubusercontent.com/35001605/47635529-a1270100-db98-11e8-8c03-1dcea7c77d1d.PNG)
# TUTORIAL / USAGE
1. Put your .jpg, .png -images into some directory
(In this tutorial I will use the Kangarooo and the Raccoon Images. These images are in the 'Samples' folder.)

![dataset](https://user-images.githubusercontent.com/35001605/47704306-8e7afd80-dc66-11e8-9f28-13010bd2d825.PNG)

2. Put names of objects, one for each line in some file( .txt, .names) and save

![objnames](https://user-images.githubusercontent.com/35001605/47704259-75724c80-dc66-11e8-9ed1-2f84d0240ebc.PNG)

3. Run Yolo label!

![image](https://user-images.githubusercontent.com/35001605/47644151-bd369c80-dbb0-11e8-9505-d7ada78911c2.png)

4. Click the button 'Open Files'and open the directory that you saved your custom images and object name lists file that you saved at step 2.

 ![image](https://user-images.githubusercontent.com/35001605/47694149-d20e4100-dc3f-11e8-9d97-fba87a6e1b5a.png)

5. And... Drag and Drop... Welcome to Hell... I really hate this work in the world

![ezgif-5-805073516651](https://user-images.githubusercontent.com/35001605/47698872-5bc80980-dc54-11e8-8984-e3e1230eccaf.gif)

6. End

![endimage](https://user-images.githubusercontent.com/35001605/47704336-a6528180-dc66-11e8-8551-3ecb612b7353.PNG)

## Shorcuts

| Key | Action |
|---|:---:|
| `A` | Save and Next Image  |
| `D, Space` | Save and Prev Image |
| `S` | Next Label <br> ![ezgif-5-f7ee77cd24c3](https://user-images.githubusercontent.com/35001605/47703190-d3049a00-dc62-11e8-846f-5bd91e98bdbc.gif)  |
| `W` | Prev Label <br> ![ezgif-5-ee915c66dad8](https://user-images.githubusercontent.com/35001605/47703191-d39d3080-dc62-11e8-800b-986ec214b80c.gif)  |
| `Ctrl + S` | Save |
| `Ctrl + C` | Delete All Rect Box |

| Mouse | Action |
|---|:---:|
| `Right Click` | Delete Focused Rect Box <br> ![ezgif-5-8d0fb51bec75](https://user-images.githubusercontent.com/35001605/47706913-c20d5600-dc6d-11e8-8a5c-47065f6a6416.gif) |

Additionally, you can access all image by moving horizontal slider bar. But when you control horizontal slider bar, the last processed image will not be saved automatically. So you should save and move horizontal slider bar.  
