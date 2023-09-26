<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Netflix Intro</title>
    <style>
        body {
            margin: 0;
            padding: 0;
            overflow: hidden;
        }
        
        #intro-video {
            position: absolute;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            object-fit: cover;
        }

        .intro-container {
            position: relative;
            width: 100%;
            height: 100vh;
        }

        .intro-text {
            position: absolute;
            top: 50%;
            left: 50%;
            transform: translate(-50%, -50%);
            text-align: center;
            color: white;
            font-size: 24px;
            text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.5);
        }
    </style>
</head>
<body>
    <div class="intro-container">
        <video id="intro-video" autoplay muted loop>
            <!-- Replace 'your-video.mp4' with your own video file -->
            <source src="your-video.mp4" type="video/mp4">
            Your browser does not support the video tag.
        </video>
        <div class="intro-text">
            <!-- Add your intro text here -->
            <h1>Welcome to My Site</h1>
            <p>Watch amazing content anytime, anywhere.</p>
        </div>
    </div>
</body>
</html>

