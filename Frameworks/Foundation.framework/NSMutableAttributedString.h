/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableAttributedString : NSAttributedString

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (Class)_intentResolver;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (void)beginEditing;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)endEditing;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableString;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// NSMutableAttributedString (NSInflection)

- (void)_addAttributesIfNotPresentMergingInlinePresentationIntents:(id)arg1 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_formatInflectionAlternative:(id)arg1 withReplacements:(id)arg2;
- (void)_inflectWithReplacements:(id)arg1 concepts:(id)arg2 preflight:(bool)arg3;
- (void)enumerateInflectableBlocksInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;

// NSMutableAttributedString (NSMutableAttributedStringFormatting)

- (void)appendLocalizedFormat:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI

// NSMutableAttributedString (CNUI)

- (void)cnui_appendTaglineString:(id)arg1;
- (void)cnui_appendTaglineString:(id)arg1 uppercased:(bool)arg2;
- (void)cnui_appendTaglineString:(id)arg1 withFont:(id)arg2;
- (void)cnui_appendTaglineString:(id)arg1 withFont:(id)arg2 uppercased:(bool)arg3;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Coherence.framework/Coherence

// NSMutableAttributedString (CRTT)

- (void)cr_appendStorage:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)cr_appendString:(id)arg1;
- (id)cr_emptyCopy;
- (void)cr_insertStorage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)cr_mergeAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withStorage:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)cr_removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)cr_replaceStorageInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withStorage:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)cr_storageFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

// NSMutableAttributedString (DataDetectorsSupport)

- (void)dd_appendAttributedString:(id)arg1;
- (void)dd_chopResults;
- (void)dd_offsetResultsBy:(long long)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

// NSMutableAttributedString (DataDetectorsSupport)

- (void)dd_appendUrl:(id)arg1 context:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 backedAttributes:(id)arg4;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 usingURLificationBlock:(id /* block */)arg2 context:(id)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)dd_replaceResultAttributesWithSimpleLinksForTypes:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_resetResults;
- (void)dd_resetResults:(bool)arg1;
- (bool)dd_urlifyClientRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 index:(unsigned long long)arg2 context:(id)arg3;
- (bool)dd_urlifyResult:(id)arg1 withBlock:(id /* block */)arg2 referenceDate:(id)arg3 context:(id)arg4;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void)removeCharactersWithAttribute:(id)arg1;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3;
- (void)replaceNewlinesWithSpaces;
- (void)trimWhitespace;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

// NSMutableAttributedString (IC)

- (void)ic_appendAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)ic_appendString:(id)arg1;
- (void)ic_replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedSubstring:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

// NSMutableAttributedString (IC)

- (void)ic_appendAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)ic_replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedSubstring:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

// NSMutableAttributedString (REMCRMergeableStringDocument_Hashtags)

- (void)rem_addHashtag:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)rem_removeHashtagInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// NSMutableAttributedString (REMCRMergeableStringDocument_Styling)

- (void)rem_setFontHint:(unsigned long long)arg1 isOn:(bool)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)rem_setUnderline:(bool)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// NSMutableAttributedString (REMTTParagraphStyle)

- (void)rem_addParagraphNamedStyle:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)rem_removeParagraphNamedStyleFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// NSMutableAttributedString (ReminderKitAdditions)

- (bool)rem_replaceTTREMHashtag:(id)arg1 withTTREMHashtag:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

// NSMutableAttributedString (SCRCMathExpression)

- (void)scrcAppendFormat:(id)arg1;

// NSMutableAttributedString (SCRCMutableAttributedStringExtras)

- (id)attributedStringByTrimmingEmptySpaceEdges;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

// NSMutableAttributedString (SCROAttributedStringExtras)

- (void)scrAttributedStringTrimTrailingNewlines;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices

// NSMutableAttributedString (MutableAttributedStringSRCSTextEditing)

- (void)adjustCapsAndSpacingUsingLeadingText:(id)arg1 localeIdentifier:(id)arg2 spellingGuessesBlock:(id /* block */)arg3;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (void)appendString:(id)arg1 withAttributes:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

// NSMutableAttributedString (NSMutableAttributedStringKitAdditions)

- (bool)_attributeFixingInProgress;
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setAttributeFixingInProgress:(bool)arg1;
- (bool)_shouldSetOriginalFontAttribute;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)setAlignment:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)subscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)superscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)unscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

// NSMutableAttributedString (UIKitAdditions)

- (void)_ui_restoreOriginalFontAttributes;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

// NSMutableAttributedString (VSSpeechAdditions)

- (void)appendString:(id)arg1 withAttributes:(id)arg2;

@end
