import matplotlib.pyplot as plt
import numpy as np

# Generate sample data
x = np.linspace(0, 10, 100)
y = np.sin(x)

# Loop over all available styles and plot a line graph using each one
for style_name in plt.style.available:
    # Set the style
    plt.style.use(style_name)

    # Create a new plot
    fig, ax = plt.subplots()

    # Plot the data
    ax.plot(x, y)

    # Set plot title and labels
    ax.set_title(f"Style: {style_name}")
    ax.set_xlabel('X-axis label')
    ax.set_ylabel('Y-axis label')

    # Save the plot as a PNG file
    fig.savefig(f"line_plot_{style_name}.png")

    # Close the plot
    plt.close(fig)
