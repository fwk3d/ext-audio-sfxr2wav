#if CODE

AUTORUN {
    recipe(
        // paths and extensions. final ziplevel
        "**.sfxr", 0,
        // conversion steps and expected outfile type
        "ext/ext-audio-sfxr2wav/sfxr2wav.EXE INPUT OUTPUT.wav"
    );
}

#endif
