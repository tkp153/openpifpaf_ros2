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
