/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate> {
    int  _alertPriority;
    double  _alertTimeout;
    NSObject<OS_dispatch_source> * _alertTimer;
    double  _autoAdvanceDuration;
    bool  _autoAdvanceEnabled;
    bool  _automaticBrailleTranslation;
    NSAttributedString * _blankUIString;
    SCROBrailleDisplay * _bluetoothBrailleDisplay;
    SCROBrailleFormatter * _currentBrailleFormatter;
    <SCROSBrailleDisplayManagerDelegate> * _delegate;
    NSMutableDictionary * _detectedIOElementsDict;
    struct __CFDictionary { } * _displayConfigurationDict;
    NSMutableArray * _displayModeStack;
    id /* block */  _eventHandled;
    NSObject<OS_dispatch_queue> * _eventQueue;
    SCROBrailleDisplayHistory * _history;
    NSData * _imageData;
    int  _inputAccessMode;
    int  _inputContractionMode;
    bool  _inputShowEightDot;
    bool  _isValid;
    double  _lastUserInteractionTime;
    bool  _lineDescriptorDisplayCallbackEnabled;
    NSAttributedString * _lineString;
    NSMutableSet * _loadedIOElements;
    NSAttributedString * _mainString;
    SCROBrailleDisplayManagedQueue * _managedDisplayQueue;
    int  _outputContractionMode;
    bool  _outputShowEightDot;
    bool  _panWithTextCursorEnabled;
    unsigned int  _persistentKeyModifiers;
    bool  _shouldBatchUpdates;
    bool  _showDotsSevenAndEight;
    SCROBrailleDisplayManagerStatus * _status;
    NSAttributedString * _statusString;
    SCROBrailleDisplay * _stealthBrailleDisplay;
    NSAttributedString * _uiEditingCachedString;
    long long  _uiStringCachedLineOffset;
    bool  _wordWrapEnabled;
}

@property (nonatomic) double autoAdvanceDuration;
@property (nonatomic) bool autoAdvanceEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SCROSBrailleDisplayManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ eventHandled;
@property (readonly) unsigned long long hash;
@property (nonatomic) int inputContractionMode;
@property (nonatomic) bool inputEightDotBraille;
@property (nonatomic) double lastUserInteractionTime;
@property (nonatomic, readonly) SCROBrailleDisplayManagedQueue *managedDisplayQueue;
@property (nonatomic) bool panWithTextCursorEnabled;
@property (nonatomic) unsigned int persistentKeyModifiers;
@property (readonly) Class superclass;
@property (nonatomic) bool wordWrapEnabled;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2;
- (void)_blankOutDisplaysInQueue:(id)arg1;
- (void)_deviceConnectedHandler:(id)arg1;
- (void)_disableAutoDetect;
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
- (void)_enableAutoDetect;
- (void)_enumerateActiveDisplays:(id /* block */)arg1;
- (id)_eventQueue_activeDisplayForToken:(int)arg1;
- (bool)_eventQueue_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2;
- (void)_eventQueue_alertTimeoutHandler;
- (void)_eventQueue_brailleDisplay:(id)arg1 isSleeping:(bool)arg2;
- (void)_eventQueue_brailleDisplayDriverDidLoad:(id)arg1;
- (void)_eventQueue_brailleDisplayDriverFailedToLoad:(id)arg1;
- (void)_eventQueue_brailleDriverDisconnected:(id)arg1;
- (id)_eventQueue_cachedMainStringForDisplayMode:(int)arg1;
- (void)_eventQueue_doSetDisplayMode:(int)arg1;
- (id)_eventQueue_driverConfiguration;
- (void)_eventQueue_exitCurrentDisplayMode;
- (void)_eventQueue_fireAlertTimeoutHandler;
- (void)_eventQueue_invalidate;
- (void)_eventQueue_loadNextDriverForIOElement:(id)arg1;
- (void)_eventQueue_loadStealthDisplay;
- (id)_eventQueue_mainAttributedString;
- (void)_eventQueue_panDisplay:(long long)arg1 token:(int)arg2;
- (void)_eventQueue_popDisplayModeStack;
- (void)_eventQueue_prepareToMemorizeNextKey:(bool)arg1 immediately:(bool)arg2 forDisplayWithToken:(int)arg3;
- (void)_eventQueue_refreshEightDotEnabledOnDisplays;
- (void)_eventQueue_resetAlertTimer;
- (void)_eventQueue_resetEditingManager;
- (void)_eventQueue_setAggregatedStatus:(id)arg1;
- (void)_eventQueue_setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1;
- (void)_eventQueue_setAutoAdvanceDuration:(double)arg1;
- (void)_eventQueue_setAutoAdvanceEnabled:(bool)arg1;
- (void)_eventQueue_setAutomaticBrailleTranslationEnabled:(bool)arg1;
- (void)_eventQueue_setBatchUpdates:(bool)arg1;
- (void)_eventQueue_setBrailleKeyDebounceTimeout:(double)arg1;
- (void)_eventQueue_setContractionMode:(int)arg1;
- (void)_eventQueue_setDisplayInputAccessMode:(int)arg1;
- (void)_eventQueue_setDisplayMode:(int)arg1;
- (void)_eventQueue_setInputContractionMode:(int)arg1;
- (void)_eventQueue_setInputEightDotBraille:(bool)arg1;
- (void)_eventQueue_setLineDescriptorCallbackEnabled:(bool)arg1;
- (void)_eventQueue_setMainAttributedString:(id)arg1 shouldDisplay:(bool)arg2 forceUpdate:(bool)arg3;
- (void)_eventQueue_setMasterStatusCellIndex:(long long)arg1;
- (void)_eventQueue_setPanWithTextCursorEnabled:(bool)arg1;
- (void)_eventQueue_setPersistentKeyModifiers:(unsigned int)arg1;
- (void)_eventQueue_setPrimaryDisplay:(int)arg1;
- (void)_eventQueue_setShowEightDotBraille:(bool)arg1;
- (void)_eventQueue_setSingleLetterInputIsOn:(bool)arg1;
- (void)_eventQueue_setTableIdentifier:(id)arg1;
- (void)_eventQueue_setTactileGraphicsImageData:(id)arg1;
- (void)_eventQueue_setTextSearchModeIsOn:(bool)arg1;
- (void)_eventQueue_setVirtualStatusAlignment:(int)arg1;
- (void)_eventQueue_setWordWrapEnabled:(bool)arg1;
- (void)_eventQueue_showDotsSevenAndEight:(bool)arg1;
- (void)_eventQueue_showNextAnnouncement:(bool)arg1;
- (void)_eventQueue_simulateKeypress:(id)arg1;
- (void)_eventQueue_stop;
- (void)_eventQueue_stopAlertTimer;
- (void)_eventQueue_translateBrailleToClipboard;
- (void)_eventQueue_unloadStealthDisplay;
- (void)_loadNextDriverForIOElement:(id)arg1;
- (void)_loadStealthDisplay;
- (void)_mainQueue_invalidate;
- (void)_refreshEightDotEnabledOnDisplays;
- (void)_resetBluetoothReconnectionTimer;
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;
- (void)_startAutodetectingTactileGraphics;
- (void)_unloadStealthDisplay;
- (id)aggregatedStatus;
- (bool)alwaysUsesNemethCodeForTechnicalText;
- (double)autoAdvanceDuration;
- (bool)autoAdvanceEnabled;
- (bool)automaticBrailleTranslation;
- (void)beginUpdates;
- (void)brailleDidStartEditingWithDisplay:(id)arg1;
- (void)brailleDisplay:(id)arg1 copyStringToClipboard:(id)arg2;
- (void)brailleDisplay:(id)arg1 deletedUntranslatedText:(id)arg2 speakLiterally:(bool)arg3;
- (void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
- (void)brailleDisplay:(id)arg1 didMoveSelection:(unsigned long long)arg2;
- (void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 lineOffset:(id)arg5;
- (void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 lineOffset:(id)arg5;
- (void)brailleDisplay:(id)arg1 didReplaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withString:(id)arg3 cursor:(unsigned long long)arg4;
- (void)brailleDisplay:(id)arg1 driverDidLoad:(bool)arg2;
- (void)brailleDisplay:(id)arg1 insertedUntranslatedText:(id)arg2 speakLiterally:(bool)arg3;
- (void)brailleDisplay:(id)arg1 isSleeping:(bool)arg2;
- (void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
- (void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
- (void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;
- (void)brailleDisplayHadUserInteraction:(id)arg1;
- (void)brailleDriverDisconnected:(id)arg1;
- (id)brailleInputManager;
- (void)cancelCandidateSelection;
- (void)clearTimeoutAlert;
- (void)configurationChangedForBrailleDisplay:(id)arg1;
- (void)configureTableWithIdentifier:(id)arg1;
- (int)contractionMode;
- (id)delegate;
- (int)displayInputAccessMode;
- (int)displayMode;
- (id)driverConfiguration;
- (void)endUpdates;
- (id /* block */)eventHandled;
- (void)exitCurrentDisplayMode;
- (bool)hasActiveDisplays;
- (id)init;
- (int)inputContractionMode;
- (bool)inputEightDotBraille;
- (void)invalidate;
- (bool)isCandidateSelectionOn;
- (bool)isConfigured;
- (bool)isValid;
- (bool)isWordDescriptionOn;
- (double)lastUserInteractionTime;
- (bool)lineDescriptorDisplayCallbackEnabled;
- (void)loadBLEDriverWithIdentifier:(id)arg1;
- (void)loadBluetoothDriverWithAddress:(id)arg1;
- (id)mainAttributedString;
- (id)managedDisplayQueue;
- (long long)masterStatusCellIndex;
- (id)newBrailleDisplayCommandDispatcher;
- (void)panDisplayBeginning:(int)arg1;
- (void)panDisplayEnd:(int)arg1;
- (void)panDisplayLeft:(int)arg1;
- (void)panDisplayRight:(int)arg1;
- (bool)panWithTextCursorEnabled;
- (unsigned int)persistentKeyModifiers;
- (void)playBorderHitSoundForBrailleDisplay:(id)arg1;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)arg1;
- (void)removeBluetoothDriverWithAddress:(id)arg1;
- (void)requestSpeech:(id)arg1 language:(id)arg2;
- (void)resetEditingManager;
- (void)setAggregatedStatus:(id)arg1;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1;
- (void)setAnnouncementsDisplayMode;
- (void)setAutoAdvanceDuration:(double)arg1;
- (void)setAutoAdvanceEnabled:(bool)arg1;
- (void)setAutomaticBrailleTranslationEnabled:(bool)arg1;
- (void)setBrailleKeyDebounceTimeout:(double)arg1;
- (void)setContractionMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayInputAccessMode:(int)arg1;
- (void)setEventHandled:(id /* block */)arg1;
- (void)setInputContractionMode:(int)arg1;
- (void)setInputEightDotBraille:(bool)arg1;
- (void)setLastUserInteractionTime:(double)arg1;
- (void)setLineDescriptorDisplayCallbackEnabled:(bool)arg1;
- (void)setMainAttributedString:(id)arg1;
- (void)setMainAttributedString:(id)arg1 forceUpdate:(bool)arg2;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setPanWithTextCursorEnabled:(bool)arg1;
- (void)setPersistentKeyModifiers:(unsigned int)arg1;
- (void)setPrepareToMemorizeNextKey:(bool)arg1 immediate:(bool)arg2 forDisplayWithToken:(int)arg3;
- (void)setPrimaryBrailleDisplay:(int)arg1;
- (void)setShowDotsSevenAndEight:(bool)arg1;
- (void)setShowEightDotBraille:(bool)arg1;
- (void)setSingleLetterInputIsOn:(bool)arg1;
- (void)setTactileGraphicsImageData:(id)arg1;
- (void)setTextSearchModeIsOn:(bool)arg1;
- (void)setUIDisplayMode;
- (void)setVirtualStatusAlignment:(int)arg1;
- (void)setWordWrapEnabled:(bool)arg1;
- (bool)showDotsSevenAndEight;
- (bool)showEightDotBraille;
- (void)showNextAnnouncement;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousAnnouncement;
- (void)showPreviousCandidate;
- (void)showPreviousWordDescription;
- (void)simulateKeypress:(id)arg1;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4;
- (void)tokenizeString:(id)arg1 intoFormatter:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (void)translateBrailleToClipboard;
- (int)virtualStatusAlignment;
- (bool)wordWrapEnabled;

@end
