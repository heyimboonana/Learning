import numpy as np
import matplotlib.pyplot as plt

# Generate a smooth random walk (simple noise example)
data = np.random.randn(100).cumsum()

# Plot the noise
plt.figure(figsize=(10, 5))
plt.plot(data, label='Random Noise')
plt.legend()
plt.grid(True)
plt.show()
