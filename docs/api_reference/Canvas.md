# Canvas Constructor
```c
Canvas(int width, int height)
Canvas(int width, int height, int alpha)
```

# Canvas Attribute Properties
```c
// Get the canvas's width
Canvas.Width

// Get the canvas's height
Canvas.Height

// Get/set the canvas's alpha value / opacity
Canvas.Alpha // default: 255

// Get/set the draw rotation angle upon committing Canvas.DrawCanvas()
Canvas.DrawRotationAngle // default: 0
```

# Canvas Draw Methods

## `Canvas.DrawPixel()`
```c
Canvas.DrawPixel(int x, int y, Color color)
Canvas.DrawPixel(int x, int y, DrawFlag drawFlag, Color color)
```

## `Canvas.DrawRectangle()`
```c
Canvas.DrawRectangle(int x, int y, int width, int height, Color color)
Canvas.DrawRectangle(int x, int y, int width, DrawFlag drawFlag, int height, Color color)
Canvas.DrawRectangle(int x, int y, int width, int height, int borderWidth, Color color)
Canvas.DrawRectangle(int x, int y, int width, DrawFlag drawFlag, int height, int borderWidth, Color color)
```

## `Canvas.DrawCircle()`
```c
Canvas.DrawCircle(int x, int y, int radius, Color color)
Canvas.DrawCircle(int x, int y, DrawFlag drawFlag, int radius, Color color)
Canvas.DrawCircle(int x, int y, int radius, int borderWidth, Color color)
Canvas.DrawCircle(int x, int y, DrawFlag drawFlag, int radius, int borderWidth, Color color)
```

## `Canvas.DrawPolygon()`
```c
// TODO
```

## `Canvas.DrawCanvas()`
```c
Canvas.DrawCanvas(int x, int y, Canvas canvas)
Canvas.DrawCanvas(int x, int y, DrawFlag drawFlag, Canvas canvas)
```

# Canvas Transform Methods

## `Canvas.TransformHorizontalFlip()`
```c
// TODO
```

## `Canvas.TransformVerticalFlip()`
```c
// TODO
```

## `Canvas.TransformGrayScale()`
```c
// TODO
```

## `Canvas.TransformInvertColors()`
```c
// TODO
```

## `Canvas.TransformColorOverlay()`
```c
// TODO
```

## `Canvas.TransformGaussianBlur()`
```c
// TODO
```
