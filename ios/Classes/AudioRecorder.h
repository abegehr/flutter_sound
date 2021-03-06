//
//  AudioRecorder.h
//  
//
//  Created by larpoux on 02/05/2020.
//
/*
 * This file is part of Flutter-Sound.
 *
 *   Flutter-Sound (Flauto) is free software: you can redistribute it and/or modify
 *   it under the terms of the Lesser GNU General Public License
 *   version 3 (LGPL3) as published by the Free Software Foundation.
 *
 *   Flutter-Sound (Flauto) is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the Lesser GNU General Public License
 *   along with Flutter-Sound.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef AudioRecorder_h
#define AudioRecorder_h


#import <Flutter/Flutter.h>
#import <AVFoundation/AVFoundation.h>
#import "Flauto.h"

@interface FlutterSoundRecorder : NSObject <AVAudioRecorderDelegate>
{
}

- (FlutterSoundRecorder*)init: (int)aSlotNo;

- (void)isEncoderSupported:(t_CODEC)codec result: (FlutterResult)result;
- (void)startRecorder :(FlutterMethodCall*)call result:(FlutterResult)result;
- (void)stopRecorder:(FlutterResult)result;
- (void)setDbPeakLevelUpdate:(double)intervalInSecs result: (FlutterResult)result;
- (void)setDbLevelEnabled:(BOOL)enabled result: (FlutterResult)result;
- (void)initializeFlautoRecorder : (FlutterMethodCall*)call result:(FlutterResult)result;
- (void)releaseFlautoRecorder : (FlutterMethodCall*)call result:(FlutterResult)result;
- (void)setSubscriptionDuration:(double)duration result: (FlutterResult)result;
- (void)pauseRecorder : (FlutterMethodCall*)call result:(FlutterResult)result;
- (void)resumeRecorder : (FlutterMethodCall*)call result:(FlutterResult)result;

@end

#endif /* AudioRecorder_h */
