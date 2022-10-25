# 各種インストール方法（メモ）
## Openpifpafのインストール方法
> 1.pip3 をインストール

`sudo apt install python3`

> 2.openpifpafをインストール

`pip3 install openpifpaf`

インストールをすると必要なpip3パッケージ入手される。

⚠もし下のようなエラーが起きた場合

```
Traceback (most recent call last):
  File "/usr/lib/python3.8/runpy.py", line 185, in _run_module_as_main
    mod_name, mod_spec, code = _get_module_details(mod_name, _Error)
  File "/usr/lib/python3.8/runpy.py", line 111, in _get_module_details
    __import__(pkg_name)
  File "/home/tkp153/.local/lib/python3.8/site-packages/openpifpaf/__init__.py", line 14, in <module>
    from .predictor import Predictor
  File "/home/tkp153/.local/lib/python3.8/site-packages/openpifpaf/predictor.py", line 7, in <module>
    from . import datasets, decoder, network, transforms, visualizer
  File "/home/tkp153/.local/lib/python3.8/site-packages/openpifpaf/datasets/__init__.py", line 9, in <module>
    from .image_list import ImageList, NumpyImageList, PilImageList
  File "/home/tkp153/.local/lib/python3.8/site-packages/openpifpaf/datasets/image_list.py", line 5, in <module>
    from .. import transforms
  File "/home/tkp153/.local/lib/python3.8/site-packages/openpifpaf/transforms/__init__.py", line 21, in <module>
    from .scale import RescaleAbsolute, RescaleRelative, ScaleMix
  File "/home/tkp153/.local/lib/python3.8/site-packages/openpifpaf/transforms/scale.py", line 90, in <module>
    class RescaleRelative(Preprocess):
  File "/home/tkp153/.local/lib/python3.8/site-packages/openpifpaf/transforms/scale.py", line 94, in RescaleRelative
    resample=PIL.Image.Resampling.BILINEAR,
  File "/home/tkp153/.local/lib/python3.8/site-packages/PIL/Image.py", line 65, in __getattr__
    raise AttributeError(f"module '{__name__}' has no attribute '{name}'")
AttributeError: module 'PIL.Image' has no attribute 'Resampling'
```

pillow というpip3 パッケージが**9.2.0**より低いバージョンになっていることが原因である。（8.2.0）になってる可能性がある。
この場合は、以下のとおりに行うとバージョンを上げることができる。

` pip3 install pillow==9.2.0`

> 3. openpifpaf の git clone を行う。
ホームディレクトリの近くに、cloneをおこなう。(Ros2のワークスペース以外で)

`git clone https://github.com/openpifpaf/openpifpaf.git`
 
>> ※なお、Openpifpafは、PytorchのCPU駆動だと**FPS = 0.1~3**しか出ないのでCUDAをいれることをオススメする。

*参考サイト*<br>
CUDAインストール参考サイト
https://www.kkaneko.jp/tools/ubuntu/ubuntu_cudnn.html<br>
CUDNN インストールサイト（.debインストール推奨）
https://developer.nvidia.com/rdp/cudnn-download
---
## Azure Kinect をROS　初期設定
- Azure kinect SDK 編
  - k4a-tools インストール
    **Ubuntu２０．０４**の場合公式のページにはこのように書かれているが、こちらの下のようにを行うとk4a-toolsが存在しないと言われてしまい詰んでしまう。
    >**AMD64** users, please follow [these
instructions](https://docs.microsoft.com/en-us/windows-server/administration/linux-package-repository-for-microsoft-software)
to configure Microsoft's Package Repository on your machine.
    
    こちらのリンクを開いて**Ubuntu18.04**のProdのファイル（packages-microsoft-prod.deb ）をダウンロードしてインストールを行う。
    >rink: https://packages.microsoft.com/config/ubuntu/18.04/
    
    終わったら以下のように実施.
    ```
    sudo apt-get update
    sudo apt install k4a-tools
    
    #もしインストールが終わったらビューワを起動し確認を行う。
    k4aviewer
    ```
    
  - ~~k4a-tools の一部であるlibk4a1.4を削除~~
  
  ~~KinectをROSには使うためには、libk4a1.3とlibk4a1.3-devを入れる必要があるが、**先に**libk4a1.3とlibk4a1.3-devを**インストール**してはいけない。なぜならばコンフリクトしてしまうからである。そのため以下のように行う~~<br>(追記　しなくてもビルド通った)
   
   
  - ビルド
    - Cmake 
    ```
    #必要なパッケージインストール
    cd
    git clone https://github.com/microsoft/Azure_Kinect_ROS_Driver.git
    sudo apt install libsoundio-dev
    sudo apt install libusb-1.0-*
    cd Azure-Kinect-Sensor-SDK/
    mkdir build
    cd build
    cmake ..
    ```
    - make
    ```
    cd
    cd Azure-Kinect-Sensor-SDK/
    cd build
    make
    ```
- Azure_kinect_ROS 編
  - このワークスペースを利用する場合
  ```
  cd
  git submodule update --init
  cd ros2_ws
  cd src
  cd azure_kinect_ros
  git branch
  git checkout foxy-devel
  git branch
  pip3 install xacro
  sudo apt install ros-foxy-joint-state-publisher
  cd
  cd ros2_ws
  colcon build
  ```
  
  -それ以外
  
  ```
  source /opt/ros/foxy/setup.bash
  cd <workspace_dir>/src
  git clone https://github.com/microsoft/Azure_Kinect_ROS_Driver.git -b foxy-devel
  pip3 install xacro
  sudo apt install ros-foxy-joint-state-publisher
  cd
  cd <workspace_dir>/src
  colcon build 
  source install/setup.bash
  ```
    
