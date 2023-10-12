/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleDisplayInput : NSObject {
    double  _brailleCharExponentialMovingAverage;
    double  _brailleTranslationTimeout;
    double  _busySince;
    struct __CFArray { } * _currentBrailleChord;
    bool  _currentBrailleChordBeganWithSpacebar;
    bool  _currentBrailleChordContainsNonSpacebarChordableKey;
    bool  _currentBrailleChordContainsSpacebar;
    unsigned int  _currentBrailleModifiers;
    struct __CFArray { } * _currentChord;
    unsigned int  _currentHIDCommand;
    struct __CFSet { } * _downBrailleDots;
    unsigned int  _downBrailleModifiers;
    struct __CFSet { } * _downKeys;
    bool  _isQuiet;
    double  _lastBrailleChordPosted;
    double  _lastBrailleChordTypingTime;
    bool  _memorizeNextKeyImmediately;
    double  _memorizeNextKeyImmediatelyTimeout;
    bool  _newDown;
    double  _nextWillMemorizeNotificationTime;
    bool  _prepareToMemorizeNextKey;
    double  _quietSince;
    bool  _requestPrepareToMemorizeNextKey;
    unsigned int  _routerEvent;
    bool  _skipBrailleKeyboardKeyTranslation;
    bool  _spacebarIsDown;
    bool  _willMemorizeNow;
}

@property (nonatomic) double brailleCharExponentialMovingAverage;
@property (nonatomic) double brailleTranslationTimeout;
@property (nonatomic) double busySince;
@property (nonatomic) struct __CFArray { }*currentBrailleChord;
@property (nonatomic) bool currentBrailleChordBeganWithSpacebar;
@property (nonatomic) bool currentBrailleChordContainsNonSpacebarChordableKey;
@property (nonatomic) bool currentBrailleChordContainsSpacebar;
@property (nonatomic) unsigned int currentBrailleModifiers;
@property (nonatomic) struct __CFArray { }*currentChord;
@property (nonatomic) unsigned int currentHIDCommand;
@property (nonatomic) struct __CFSet { }*downBrailleDots;
@property (nonatomic) unsigned int downBrailleModifiers;
@property (nonatomic) struct __CFSet { }*downKeys;
@property (nonatomic) bool isQuiet;
@property (nonatomic) double lastBrailleChordPosted;
@property (nonatomic) double lastBrailleChordTypingTime;
@property (nonatomic) bool memorizeNextKeyImmediately;
@property (nonatomic) double memorizeNextKeyImmediatelyTimeout;
@property (nonatomic) bool newDown;
@property (nonatomic) double nextWillMemorizeNotificationTime;
@property (nonatomic) bool prepareToMemorizeNextKey;
@property (nonatomic) double quietSince;
@property (nonatomic) bool requestPrepareToMemorizeNextKey;
@property (nonatomic) unsigned int routerEvent;
@property (nonatomic) bool skipBrailleKeyboardKeyTranslation;
@property (nonatomic) bool spacebarIsDown;
@property (nonatomic) bool willMemorizeNow;

+ (id)sharedInstance;

- (double)brailleCharExponentialMovingAverage;
- (double)brailleTranslationTimeout;
- (double)busySince;
- (struct __CFArray { }*)currentBrailleChord;
- (bool)currentBrailleChordBeganWithSpacebar;
- (bool)currentBrailleChordContainsNonSpacebarChordableKey;
- (bool)currentBrailleChordContainsSpacebar;
- (unsigned int)currentBrailleModifiers;
- (struct __CFArray { }*)currentChord;
- (unsigned int)currentHIDCommand;
- (void)dealloc;
- (struct __CFSet { }*)downBrailleDots;
- (unsigned int)downBrailleModifiers;
- (struct __CFSet { }*)downKeys;
- (bool)isQuiet;
- (double)lastBrailleChordPosted;
- (double)lastBrailleChordTypingTime;
- (bool)memorizeNextKeyImmediately;
- (double)memorizeNextKeyImmediatelyTimeout;
- (bool)newDown;
- (double)nextWillMemorizeNotificationTime;
- (bool)prepareToMemorizeNextKey;
- (double)quietSince;
- (bool)requestPrepareToMemorizeNextKey;
- (unsigned int)routerEvent;
- (void)setBrailleCharExponentialMovingAverage:(double)arg1;
- (void)setBrailleTranslationTimeout:(double)arg1;
- (void)setBusySince:(double)arg1;
- (void)setCurrentBrailleChord:(struct __CFArray { }*)arg1;
- (void)setCurrentBrailleChordBeganWithSpacebar:(bool)arg1;
- (void)setCurrentBrailleChordContainsNonSpacebarChordableKey:(bool)arg1;
- (void)setCurrentBrailleChordContainsSpacebar:(bool)arg1;
- (void)setCurrentBrailleModifiers:(unsigned int)arg1;
- (void)setCurrentChord:(struct __CFArray { }*)arg1;
- (void)setCurrentHIDCommand:(unsigned int)arg1;
- (void)setDownBrailleDots:(struct __CFSet { }*)arg1;
- (void)setDownBrailleModifiers:(unsigned int)arg1;
- (void)setDownKeys:(struct __CFSet { }*)arg1;
- (void)setIsQuiet:(bool)arg1;
- (void)setLastBrailleChordPosted:(double)arg1;
- (void)setLastBrailleChordTypingTime:(double)arg1;
- (void)setMemorizeNextKeyImmediately:(bool)arg1;
- (void)setMemorizeNextKeyImmediatelyTimeout:(double)arg1;
- (void)setNewDown:(bool)arg1;
- (void)setNextWillMemorizeNotificationTime:(double)arg1;
- (void)setPrepareToMemorizeNextKey:(bool)arg1;
- (void)setQuietSince:(double)arg1;
- (void)setRequestPrepareToMemorizeNextKey:(bool)arg1;
- (void)setRouterEvent:(unsigned int)arg1;
- (void)setSkipBrailleKeyboardKeyTranslation:(bool)arg1;
- (void)setSpacebarIsDown:(bool)arg1;
- (void)setWillMemorizeNow:(bool)arg1;
- (bool)skipBrailleKeyboardKeyTranslation;
- (bool)spacebarIsDown;
- (bool)willMemorizeNow;

@end
