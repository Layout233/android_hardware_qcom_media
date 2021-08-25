/*--------------------------------------------------------------------------
Copyright (c) 2014-16, 2018 The Linux Foundation. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

--------------------------------------------------------------------------*/
/*============================================================================
                            O p e n M A X   w r a p p e r s
                             O p e n  M A X   C o r e

 This module contains the registry table for the QTI's OpenMAX core.

*//*========================================================================*/

#include "qc_omx_core.h"

omx_core_cb_type core[] =
{
  {
    "OMX.qcom.video.decoder.avc",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxVdec.so",
    {
      "video_decoder.avc"
    }
  },
  {
    "OMX.qcom.video.decoder.avc.dsmode",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxVideoDSMode.so",
    {
      "video_decoder.avc"
    }
  },
  {
    "OMX.qcom.video.decoder.avc.secure",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxVdec.so",
    {
      "video_decoder.avc"
    }
  },
  {
    "OMX.qcom.file.muxer",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle

    "libOmxMux.so",
    {
      "container_muxer.mp2"
    }
  },
  {
    "OMX.qcom.video.decoder.hevc",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxVdec.so",
    {
      "video_decoder.hevc"
    }
  },
  {
    "OMX.qcom.video.decoder.hevc.secure",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxVdec.so",
    {
      "video_decoder.hevc"
    }
  },
  {
    "OMX.qcom.video.decoder.vp8",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxVdec.so",
    {
      "video_decoder.vp8"
    }
  },
   {
    "OMX.qcom.video.encoder.avc",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxVenc.so",
    {
      "video_encoder.avc"
    }
  },
  {
    "OMX.qcom.video.encoder.avc.secure",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxVenc.so",
    {
      "video_encoder.avc"
    }
  },
  {
    "OMX.qcom.audio.encoder.g711mlaw",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxG711Enc.so",
    {
      "audio_encoder.g711"
    }
  },
  {
    "OMX.qcom.audio.encoder.g711alaw",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxG711Enc.so",
    {
      "audio_encoder.g711"
    }
  },
  {
    "OMX.qcom.audio.encoder.amrwb",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxAmrEnc.so",
    {
      "audio_encoder.amrwb"
    }
  },
  {
    "OMX.qcom.audio.decoder.g711mlaw",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxG711Dec.so",
    {
      "audio_decoder.g711"
    }
  },
  {
    "OMX.qcom.audio.decoder.g711alaw",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxG711Dec.so",
    {
      "audio_decoder.g711"
    }
  },
  {
    "OMX.qcom.audio.decoder.amrwb",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxAmrDec.so",
    {
     "audio_decoder.amrwb"
    }
  },
  {
    "OMX.qcom.audio.decoder.amrnb",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxAmrDec.so",
    {
      "audio_decoder.amrnb"
    }
  },
  {
    "OMX.qcom.audio.decoder.Qcelp13",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxQcelp13Dec.so",
    {
      "audio_decoder.Qcelp13"
    }
  },
  {
    "OMX.qcom.audio.decoder.evrc",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxEvrcDec.so",
    {
      "audio_decoder.evrc"
    }
  },
  {
    "OMX.qcom.audio.decoder.wma",
    NULL, // Create instance function
    // Unique instance handle
    {
     NULL,
     NULL,
     NULL,
     NULL
    },
    NULL,   // Shared object library handle
    "libOmxWmaDec.so",
    {
     "audio_decoder.wma"
    }
  },
  {
    "OMX.qcom.audio.decoder.wma10Pro",
    NULL,   // Create instance function
    // Unique instance handle
    {
     NULL,
     NULL,
     NULL,
     NULL
    },
    NULL,   // Shared object library handle
    "libOmxWmaDec.so",
    {
     "audio_decoder.wma"
    }
  },
  {
    "OMX.qcom.audio.decoder.aac",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxAacDec.so",
    {
      "audio_decoder.aac"
    }
  },
  {
    "OMX.qcom.audio.decoder.alac",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxAlacDec.so",
    {
      "audio_decoder.alac"
    }
  },
  {
    "OMX.qti.audio.decoder.alac.sw",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxAlacDecSw.so",
    {
      "audio_decoder.alac"
    }
  },
  {
    "OMX.qcom.audio.decoder.ape",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxApeDec.so",
    {
      "audio_decoder.ape"
    }
  },
  {
    "OMX.qti.audio.decoder.ape.sw",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxApeDecSw.so",
    {
      "audio_decoder.ape"
    }
  },
  {
    "OMX.qti.audio.decoder.flac.sw",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,  // Shared object library handle
    "libOmxFlacDecSw.so",
    {
      "audio_decoder.flac"
    }
  },
  {
    "OMX.qcom.audio.encoder.aac",
    NULL, // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,  // Shared object library handle
    "libOmxAacEnc.so",
    {
      "audio_encoder.aac"
    }
  },
  {
    "OMX.qcom.audio.encoder.qcelp13",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxQcelp13Enc.so",
    {
      "audio_encoder.qcelp13"
    }
  },
  {
    "OMX.qcom.audio.encoder.evrc",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxEvrcEnc.so",
    {
      "audio_encoder.evrc"
    }
  },
  {
    "OMX.qcom.audio.encoder.amrnb",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxAmrEnc.so",
    {
      "audio_encoder.amrnb"
    }
  },
  {
    "OMX.qcom.audio.decoder.multiaac",
    NULL,   // Create instance function
    // Unique instance handle
    {
      NULL,
      NULL,
      NULL,
      NULL
    },
    NULL,   // Shared object library handle
    "libOmxAacDec.so",
    {
      "audio_decoder.aac"
    }
  }
};

const unsigned int SIZE_OF_CORE = sizeof(core) / sizeof(omx_core_cb_type);


