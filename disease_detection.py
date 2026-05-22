from tensorflow.keras.models import load_model
import cv2
import numpy as np

model = load_model('models/mushroom_model.h5')

img = cv2.imread('test.jpg')

img = cv2.resize(img, (224,224))
img = img / 255.0

img = np.expand_dims(img, axis=0)

prediction = model.predict(img)

print(prediction)