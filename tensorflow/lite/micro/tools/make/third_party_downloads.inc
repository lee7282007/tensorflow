# Add URLs and MD5 checksums for third-party libraries here.
# We use mirror.tensorflow.org to cache copies of third-party files,
# but this is just an optimization applied manually by TensorFlow
# engineers, so add non-mirrored URLs if you need to update this
# in a pull request and we'll periodically copy them and update
# the URL.

GEMMLOWP_URL := "https://github.com/google/gemmlowp/archive/719139ce755a0f31cbf1c37f7f98adcc7fc9f425.zip"
GEMMLOWP_MD5 := "7e8191b24853d75de2af87622ad293ba"

ifeq ($(HOST_OS),windows)
  FLATBUFFERS_URL := "http://mirror.tensorflow.org/github.com/google/flatbuffers/archive/v1.12.0.zip"
  FLATBUFFERS_MD5 := "a1afdbf114dec01a861c1b8c917d0fc7"
else
  FLATBUFFERS_URL := "http://mirror.tensorflow.org/github.com/google/flatbuffers/archive/v1.12.0.tar.gz"
  FLATBUFFERS_MD5 := "c62ffefb3d4548b127cca14ce047f16c"
endif

ifeq ($(HOST_OS),osx)
  GCC_EMBEDDED_URL := "http://mirror.tensorflow.org/developer.arm.com/-/media/Files/downloads/gnu-rm/7-2018q2/gcc-arm-none-eabi-7-2018-q2-update-mac.tar.bz2"
  GCC_EMBEDDED_MD5 := "a66be9828cf3c57d7d21178e07cd8904"
else ifeq ($(HOST_OS),windows)
  GCC_EMBEDDED_URL := "http://mirror.tensorflow.org/developer.arm.com/-/media/Files/downloads/gnu-rm/7-2018q2/gcc-arm-none-eabi-7-2018-q2-update-win32.zip"
  GCC_EMBEDDED_MD5 := "bc8ae26d7c429f30d583a605a4bcf9bc"
else
  GCC_EMBEDDED_URL := "http://mirror.tensorflow.org/developer.arm.com/-/media/Files/downloads/gnu-rm/7-2018q2/gcc-arm-none-eabi-7-2018-q2-update-linux.tar.bz2"
  GCC_EMBEDDED_MD5 := "299ebd3f1c2c90930d28ab82e5d8d6c0"
endif

LEON_BCC2_URL := "http://mirror.tensorflow.org/www.gaisler.com/anonftp/bcc2/bin/bcc-2.0.7-gcc-linux64.tar.xz"
LEON_BCC2_MD5 := "cdf78082be4882da2a92c9baa82fe765"

TSIM_URL := "http://mirror.tensorflow.org/www.gaisler.com/anonftp/tsim/tsim-eval-2.0.63.tar.gz"
TSIM_MD5 := "afa0095d3ed989a949e1467f94e41d2f"

CMSIS_URL := "http://mirror.tensorflow.org/github.com/ARM-software/CMSIS_5/archive/9daaa7a34a5627a24009462b8fa8413a00c4fdb1.zip"
CMSIS_MD5 := "b988dacff8925ffffcb7e5079cc713b7"

AM_SDK_URL := "http://mirror.tensorflow.org/s3.asia.ambiqmicro.com/downloads/AmbiqSuite-Rel2.2.0.zip"
AM_SDK_MD5 := "7605fa2d4d97e6bb7a1190c92b66b597"
AM_SDK_DEST := AmbiqSuite-Rel2.2.0

SF_BSPS_URL := "http://mirror.tensorflow.org/github.com/sparkfun/SparkFun_Apollo3_AmbiqSuite_BSPs/archive/v0.0.7.zip"
SF_BSPS_MD5 := "34199f7e754735661d1c8a70a40ca7a3"
SF_BSPS_DEST := boards_sfe

STM32_BARE_LIB_URL := "http://mirror.tensorflow.org/github.com/google/stm32_bare_lib/archive/c07d611fb0af58450c5a3e0ab4d52b47f99bc82d.zip"
STM32_BARE_LIB_MD5 := "282bff40d4d0b92278fd123a3b6e3123"

ifeq ($(HOST_OS),osx)
  RISCV_TOOLCHAIN_URL := "http://mirror.tensorflow.org/static.dev.sifive.com/dev-tools/riscv64-unknown-elf-gcc-8.1.0-2019.01.0-x86_64-apple-darwin.tar.gz"
  RISCV_TOOLCHAIN_MD5 := "2ac2fa00618b9ab7fa0c7d0ec173de94"
else
  RISCV_TOOLCHAIN_URL := "http://mirror.tensorflow.org/static.dev.sifive.com/dev-tools/riscv64-unknown-elf-gcc-20181030-x86_64-linux-ubuntu14.tar.gz"
  RISCV_TOOLCHAIN_MD5="2366b7afe36a54dc94fb0ff8a0830934"
endif

SIFIVE_FE310_LIB_URL := "http://mirror.tensorflow.org/github.com/sifive/freedom-e-sdk/archive/baeeb8fd497a99b3c141d7494309ec2e64f19bdf.zip"
SIFIVE_FE310_LIB_MD5 := "06ee24c4956f8e21670ab3395861fe64"

KISSFFT_URL="http://mirror.tensorflow.org/github.com/mborgerding/kissfft/archive/v130.zip"
KISSFFT_MD5="438ba1fef5783cc5f5f201395cc477ca"

RUY_URL="https://github.com/google/ruy/archive/5bb02fbf90824c2eb6cd7418f766c593106a332b.zip"
RUY_MD5="c720b1743360259ac45809a321f8f26c"

CIFAR10_DATASET_URL="http://mirror.tensorflow.org/www.cs.toronto.edu/~kriz/cifar-10-binary.tar.gz"
CIFAR10_DATASET_MD5="c32a1d4ab5d03f1284b67883e8d87530"

IMAGE_RECOGNITION_MODEL_URL := "https://storage.googleapis.com/download.tensorflow.org/models/tflite/cifar_image_recognition_model_2020_05_27.zip"
IMAGE_RECOGNITION_MODEL_MD5 := "1f4607b05ac45b8a6146fb883dbc2d7b"

PERSON_MODEL_URL := "https://storage.googleapis.com/download.tensorflow.org/data/tf_lite_micro_person_data_grayscale_2020_05_27.zip"
PERSON_MODEL_MD5 := "55b85f76e2995153e660391d4a209ef1"

PERSON_MODEL_INT8_URL := "https://storage.googleapis.com/download.tensorflow.org/data/tf_lite_micro_person_data_int8_grayscale_2020_06_23.zip"
PERSON_MODEL_INT8_MD5 := "9b5b6d4677dd0a91b1bb992d1c4c0417"

EMBARC_MLI_URL := "http://mirror.tensorflow.org/github.com/foss-for-synopsys-dwc-arc-processors/embarc_mli/archive/58284867ca52d1f43b25045e8601999d7359d986.zip"
EMBARC_MLI_MD5 := "2bf4982a327fdaa9d475803ce014d1ef"

EMBARC_MLI_PRE_COMPILED_URL := "http://mirror.tensorflow.org/github.com/foss-for-synopsys-dwc-arc-processors/embarc_mli/releases/download/Release_1.1_RC2/embARC_MLI_package.zip"
EMBARC_MLI_PRE_COMPILED_MD5 := "a95ff9e0370434484f14e7e4114327f6"

ZEPHYR_URL := "http://mirror.tensorflow.org/github.com/antmicro/zephyr/archive/55e36b9.zip"
ZEPHYR_MD5 := "755622eb4812fde918a6382b65d50c3b"

XTENSA_HIFI4_URL :="http://mirror.tensorflow.org/github.com/foss-xtensa/nnlib-hifi4/raw/master/archive/xa_nnlib_06_27.zip"
XTENSA_HIFI4_MD5 :="45fdc1209a8da62ab568aa6040f7eabf"

ETHOSU_URL := "http://mirror.tensorflow.org/git.mlplatform.org/ml/ethos-u/ethos-u-core-driver.git/snapshot/ethos-u-core-driver-bcb5aaa99756f1b5c1295b079ebdd60996bc75a5.tar.gz"
ETHOSU_MD5 := "d2073c8d88fc167fd5c46b5dcda58ea1"

HIMAX_WE1_SDK_URL ="https://www.himax.com.tw/we-i/himax_we1_sdk_v03.zip"
HIMAX_WE1_SDK_MD5 ="1cd9b17f3fdb3e9a1dfd1cc356694325"