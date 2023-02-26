Purely an example of how Engage's API would be used. A language has not been selected yet.
```cs
Window window = new Window(800, 800, "Simple Draw & Movement");

int x = 0;
int y = 0;
Color rectColor = new Color(255, 255, 255)

while(true)
{
    Canvas windowCanvas = window.Canvas;
    InputController inputs = window.GetInputController();

    if (inputs.GetInputKey("A"))
    {
        x -= 50;
    }
    else if (inputs.GetInputKey("D"))
    {
        y += 50;
    }
    else if (inputs.GetInputKey("Escape"))
    {
        window.Quit();
    }

    windowCanvas.DrawRectangle(x, y, 50, 50, rectColor);

    window.UpdateDisplay();
}

```