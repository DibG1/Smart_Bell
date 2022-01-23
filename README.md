# <img src="https://user-images.githubusercontent.com/78297958/150677523-1ac739ee-bd39-4e2b-88d0-3ca33bd86958.png" width="72" height="72"> Smart_Bell
>A Team Handicap Project


## <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTMVJKXlY5uo_dAXA_pEo1WReNWcmb9Gr3I_A&usqp=CAU" width="32" height="32"> **Problem Statement**

With the advent of lockdowns, gyms are required to be shut. This had led to a sizeable number of people purchasing gymming equipment for use at home. However, in the absence of a professional trainer, it's common for people to lift weights with improper form that can negatively affect their health.There have also been many cases of deaths in the gym due to cardiac arrests, especially during high intensity workout sessions.

## <img src="https://user-images.githubusercontent.com/78297958/150647333-3cce5635-8e09-4113-b022-9570568cfbfc.png" width="32" height="32"> **Components Required**

NodeMCU <br>
MPU6050 <br>
Pulse Sensor <br>
Active Buzzer <br>

 ## <img src="https://www.livehome3d.com/assets/img/articles/blueprint-into-floor-plan/architectural-blueprint.jpg" width="32" height="32">**Implementation**
We are using a collapsable rod which can convert the dumbbell to a barbell and a benchpress weight thus performing many functions. The device also has a clipping mechanism which can clip different weights. The Smartbell is equipped with a gyroscope sensor which is used for counting the number of reps. The gyroscope sensor also has another function, it will detect if the correct form is used during the workout session, if the correct form is not used, an alarm will start beeping notifying the user to correct their form. The Smartbell is also outfitted with a pulse sensor which is activated when the user places their finger on it. The pulse sensor checks the BPM of the user and if the BPM reaches unsafe levels, the another alarm will ring notifying the user to stop worikng out and take a break. The BPM values recieved is also sent to a webpage which gives the amount of calories burnt. We have used firebase for the IOT functionality of the device.
## <img src="https://media.istockphoto.com/photos/hand-holding-light-bulb-and-business-digital-marketing-innovation-picture-id1127257350?k=20&m=1127257350&s=612x612&w=0&h=s0zCX95yDfUUotfNY_Rx55oU68CXtwnR_rNLtT5kd6g=" width=32 height=32>**Novelty**
Our product, the Smartbell capitalizes on this situation.To tackle the death due to cardiac arrest situation mentioned earlier, the smartbell has an alarm which rings when the BPM reaches unsafe levels. Our product is unique and better than a smart watch because it will not only alert the user about the increasing heartbeat but also help him/her in correcting their form ,number of reps performed and calories burnt. Its a highly specific device made only for excercising with free weights.

## <img src="https://d3n817fwly711g.cloudfront.net/uploads/2019/06/The-Easy-Guide-to-Workflows.png" width="32" height="32"> Workflow <br>
The MPU6050 is an IMU comprising of a three axes accelerometer and gyroscope. Utilizing the raw values obtained from the sensor we calculate the number of reps made in the exercise and if our posture is correct. The pulse sensors senses our BPM and warns if it crosses the minimum threshold level. The BPM values can also be used to calculate the amount of calories burnt. The data can then be interfaced via IoT and be sent to firebase that can store the data for display in the webpage

## <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcScIy-Bldo9w8CUDv-IHqdkC1QXq_ZeBgz7oA&usqp=CAU" width="32" height="32"> Tech Stack<br>
 1. <img src="https://icon2.cleanpng.com/20180715/skh/kisspng-arduino-computer-software-library-electronics-arduino-logo-5b4beae2df7ab1.6638086415317019869154.jpg" width="32" height="32"> Arduino IDE
 2. <img src="https://i1.wp.com/www.learnmicropython.com/wp-content/uploads/2019/01/esp8266_logo1.png?resize=300%2C300" width="32" height="32"> NodeMCU
 3. <img src="https://gdm-catalog-fmapi-prod.imgix.net/ProductLogo/554b7a86-f7d2-4a3c-b679-88c2980f95c7.png?auto=format&ixlib=react-9.0.3&h=auto&w=auto" width="32" height="32"> Fusion 360
 4. <img src="https://hackster.imgix.net/uploads/image/file/130358/Blynk_logo.png?auto=compress%2Cformat&w=1280&h=960&fit=max" width="32" height="32"> Blynk
 5. <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS31JlS3RH1rRuZuiVnYZw3iH2KAMRlaNBEGw&usqp=CAU" width="32" height="32"> Firebase







