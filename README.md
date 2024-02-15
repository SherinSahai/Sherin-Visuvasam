DOG BREED PREDICTION USING CONVOLUTIONAL NEURAL NETWORKS
 
ABSTRACT:
In all over the world there are more than 700 million dogs are there and it is classified into 360 breeds. It is difficult to classify the dogs based on its breeds. Here the Image Processing involves analysing and extracting identical features from dog images using features like image segmentation, colour analysis and age detection. We will gather a wide dataset which contain 20580 dog images and 120 different breeds of dogs. Using Convolutional Neural Networks and Transfer Learning, we will extract unique features from the image and classify different breeds of dogs.

 
INTRODUCTION:


Among pets, dogs are the most popular animals. Customers interested in purchasing a dog can conduct research by observing canines owned by others. It may not always be easy to approach the dog's owner and inquire about the breed. Additionally, it's possible that the dog's owners aren't aware of their dog's breed. We attempted to solve this market need in this report by automating the process of locating a dog breed via an application that allows you to determine the breed of a dog just by snapping a picture of the dogs. The pc is trained with large image datasets then it changes the pixel value of the image to an indoor representation, where the classifier can detect patterns on the input image. During this project, a deep learning convolutional neural network supported Tensorflow is deployed for binary image classification. CNNs (Convolutional Neural Networks) mimic human vision. In simple terms, we can use our  vision to  categorize  thing. CNN develops software that enables visual identification and recognition by constructing a mathematical model and putting it into practice as an algorithm. CNNs are a subset of deep learning and feed forward artificial neural networks. It functions in the same way as ordinary neural networks, except that every input is a picture. As a result of the assumption, we can hide a few properties from the architecture, making the feed forward function more efficient. CNN have also gained significant traction in this field in recent years, mostly due to reoccuring architectures being viable for solving many different problems. CNN have been shown to be useful at analysing visual data. They use multi-layer perceptrons and, in comparison to other image classification algorithms, usually require less preparation.
In this project we are going to see about breed prediction of different dogs from dataset which contains more than twenty thousand dog images and 120 dog breeds using CNN and Transfer Larning.
 


LITERATURE SURVEY

Different papers and articles have been reviewed for this project. Also, their conclusions are summarized in this section. The section present documents that were studied prior and post project development. The mentioned articles provide with a better understanding about structure of the system and how various algorithms could be combined together so as to build a system with higher efficiency.
Title	Year	Author	Summary	
	Learning Features and Parts forFine- Grained Recognition 22nd lnt.
Conference on Pattern Recognition	2015
IRJET	Jonatn Krause;Tim nit cGebru;jia Deng;Li-Jia Li	Just an overview of learning how to train different Models. Datasets include collection of their own pictures.	
	Ensemble deep neural Networks for domain- specific Image Recognition	2016
IEEE (ICME W)	Wenbo Li;ChuanKe	Limited Images were taken into consideration for training. Datasets included were not mentioned	
Dog Breed Identification UsingDeep Learning	20181
EEE	
Zalan Raduly;Csab a Sulyok	The dataset which wastaken in consideration is very less, Resulting in lower accuracy ResNet-82.01%	
Transfer Learning on Convolutional Neural Networks for Dog Identification	
20181
EEE	
Xinyuan Tu;Kenneth Lai	The number ofdog breedtaken for training was limited to 100 images per class. The model used and accuracy gained was
SFU/Resnet-	


 
					
	Dog Identification using Soft Biometrics and Neural	2019
IEEE	
Xinyuan Tu;Svetlana Yanushkevi ch	
Biometrics used in this project needs device of much higher cost to be involved SFU/DenseNet- 90.22%	
	
Transfer	
2019
IEEE	
ValentinA.	
Limited to European dog breeds. The	
	Learning		Golodov;Ma	Model used an accuracy gained was	
	Approach to		riya S.	SFU/VGG16-91.78%	
	Fine Grained		Dubrovina; Anast asiya
S. Paziy		
	Image				
	Classification				
	2019 1nt.				
	Russian
Automation				
	
Identification of Dogs breed for deep learning	2019
IEEE (IACC)	


Rakesh Kumar; ManishSharma; KritikaDhawale; Gaurav Singal	


Used lesser Epoch value augmentation The model used and accuracy gained was SFU/ Inception model- 85.67%	
	Dog-Breed- classifier for facial recognition by using CNN	
2020	


Bickey Kumar shah;Aman Kumar;Amr it Kumar	


Only the Images of Dog face would be taken into consideration. The model used and accuracy gained was SFU/Mobile Net-75.2%	

 
PROPOSED WORK:


A Dog breed prediction system is built using the convolutional neural network (CNN).Around 120 breeds of dog from different parts of the world would be taken  into  consideration.  For  training the system  a large dataset would be taken into consideration which would be divided into training and testing purpose.
To Build a model that predict dogs breed that consist of
1.	Data partition
The dataset has been divided into three parts train, samples and test for their specific purposes. Around 55% of the dataset has been utilized into the training, 10% in samples and remaining data is allotted to testing. Allocating more data towards training helps model learn better. respective names.
2.	Data preprocessing
Data preprocessing describes any type of processing performed on raw procedure. The images have been resized into 224 * 224 pixels. Then resized images are converted into tensor.
3.	Data Augmentation
The need for an augmented dataset is created due to insufficient dataset size. Horizontal transformation are used. So the training of the model can be done on various version of single image which are obtained through augmentation. Thus model be strong enough to identify dog breed in images.
4.	Convolutional Neural Network:
Convolutional Neural Network is an exceptional kind  of  bolster advancing artificial neural network, which stimulated through visual cortex. In CNN, the neuron  in  a  layer  is  solely related  to  a  small  area of the layer earlier than it, alternatively of all the neurons in a entirely related manner, so CNN manage fewer quantities of weights and much less number of neurons. A CNN architecture  is  created  from  scratch with 3 convolutional layers and max pooling along with dropout to dimensiontionallity and feature reduction.
 




