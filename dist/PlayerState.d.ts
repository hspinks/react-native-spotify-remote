import PlaybackOptions from './PlaybackOptions';
import PlaybackRestrictions from './PlaybackRestrictions';
import Track from './Track';
export default interface PlayerState {
    track: Track;
    playbackPosition: any;
    playbackSpeed: any;
    paused: boolean;
    playbackRestrictions: PlaybackRestrictions;
    playbackOptions: PlaybackOptions;
}
