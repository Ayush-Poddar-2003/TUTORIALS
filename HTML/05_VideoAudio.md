You can use the < video > container tag to embed video files into a web page.

    <video>
      <source src="file.mp4" type="video/mp4">
    </video>

The < source > empty tag provides the location and format of the video file.

When different < source > options are included, the browser will choose the first one it supports.

You can add text between the < video > tags, The text will only be displayed in browsers that don’t support the video element.

    <video>
      <source src="videofile.mp4" type="video/mp4"> 
      Video not supported
    </video>

You can display play/pause, volume and other video controls with the controls attribute

SAME WITH AUDIO :-

    <audio>
        <source src="audiofile.mp3" type="audio/mpeg">
        Audio not supported
    </audio>